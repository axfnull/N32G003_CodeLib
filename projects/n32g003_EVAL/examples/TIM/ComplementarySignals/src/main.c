/**
*     Copyright (c) 2022, Nations Technologies Inc.
* 
*     All rights reserved.
*
*     This software is the exclusive property of Nations Technologies Inc. (Hereinafter 
* referred to as NATIONS). This software, and the product of NATIONS described herein 
* (Hereinafter referred to as the Product) are owned by NATIONS under the laws and treaties
* of the People's Republic of China and other applicable jurisdictions worldwide.
*
*     NATIONS does not grant any license under its patents, copyrights, trademarks, or other 
* intellectual property rights. Names and brands of third party may be mentioned or referred 
* thereto (if any) for identification purposes only.
*
*     NATIONS reserves the right to make changes, corrections, enhancements, modifications, and 
* improvements to this software at any time without notice. Please contact NATIONS and obtain 
* the latest version of this software before placing orders.

*     Although NATIONS has attempted to provide accurate and reliable information, NATIONS assumes 
* no responsibility for the accuracy and reliability of this software.
* 
*     It is the responsibility of the user of this software to properly design, program, and test 
* the functionality and safety of any application made of this information and any resulting product. 
* In no event shall NATIONS be liable for any direct, indirect, incidental, special,exemplary, or 
* consequential damages arising in any way out of the use of this software or the Product.
*
*     NATIONS Products are neither intended nor warranted for usage in systems or equipment, any
* malfunction or failure of which may cause loss of human life, bodily injury or severe property 
* damage. Such applications are deemed, "Insecure Usage".
*
*     All Insecure Usage shall be made at user's risk. User shall indemnify NATIONS and hold NATIONS 
* harmless from and against all claims, costs, damages, and other liabilities, arising from or related 
* to any customer's Insecure Usage.

*     Any express or implied warranty with regard to this software or the Product, including,but not 
* limited to, the warranties of merchantability, fitness for a particular purpose and non-infringement
* are disclaimed to the fullest extent permitted by law.

*     Unless otherwise explicitly permitted by NATIONS, anyone may not duplicate, modify, transcribe
* or otherwise distribute this software for any purposes, in whole or in part.
*
*     NATIONS products and technologies shall not be used for or incorporated into any products or systems
* whose manufacture, use, or sale is prohibited under any applicable domestic or foreign laws or regulations. 
* User shall comply with any applicable export control laws and regulations promulgated and administered by 
* the governments of any countries asserting jurisdiction over the parties or transactions.
**/

/**
*\*\file main.c
*\*\author Nations
*\*\version v1.0.0
*\*\copyright Copyright (c) 2022, Nations Technologies Inc. All rights reserved.
**/
#include "main.h"


TIM_TimeBaseInitType TIM_TimeBaseStructure;
OCInitType TIM_OCInitStructure;
TIM_BDTRInitType TIM_BDTRInitStructure;
uint16_t TimerPeriod   = 0;
uint16_t Channel1Pulse = 0, Channel2Pulse = 0, Channel3Pulse = 0;

/**
*\*\name    main.
*\*\fun     Main program.
*\*\param   none
*\*\return  none
**/
int main(void)
{
	
    /* System Clocks Configuration */
    RCC_Configuration();

    /* Configure the GPIO ports */
    GPIO_Configuration();

    /* -----------------------------------------------------------------------
    TIM1 Configuration to:

    1. Generate 3 complementary PWM signals with 3 different duty cycles:
    TIM1CLK is fixed to SystemCoreClockFrequency, the TIM1 Prescaler is equal to 0 so the
    TIM1 counter clock used is SystemCoreClockFrequency.
    * SystemCoreClock is set to 48 MHz.

    The objective is to generate PWM signal at 17.57 KHz:
    - TIM1_Period = (SystemCoreClock / 17570) - 1

    The Three Duty cycles are computed as the following description:

    The channel 1 duty cycle is set to 50% so channel 1N is set to 50%.
    The channel 2 duty cycle is set to 25% so channel 2N is set to 75%.
    The channel 3 duty cycle is set to 12.5% so channel 3N is set to 87.5%.
    The Timer pulse is calculated as follows:
      - ChannelxPulse = DutyCycle * (TIM1_Period - 1) / 100

    2. Insert a dead time equal to 11/SystemCoreClockFrequency ns
    3. Configure the break feature, active at High level, and using the automatic
       output enable feature
    4. Use the Locking parameters level1.
    ----------------------------------------------------------------------- */
		
    /* Compute the value to be set in AR register to generate signal frequency at 17.57 Khz */
    TimerPeriod = (SystemCoreClockFrequency / 17570) - 1;
    /* Compute CCDAT1 value to generate a duty cycle at 50% for channel 1 */
    Channel1Pulse = (uint16_t)(((uint32_t)5 * (TimerPeriod - 1)) / 10);
    /* Compute CCDAT2 value to generate a duty cycle at 25%  for channel 2 */
    Channel2Pulse = (uint16_t)(((uint32_t)25 * (TimerPeriod - 1)) / 100);
    /* Compute CCDAT3 value to generate a duty cycle at 12.5%  for channel 3 */
    Channel3Pulse = (uint16_t)(((uint32_t)125 * (TimerPeriod - 1)) / 1000);		
				
    /* Time Base configuration */
    TIM_Base_Struct_Initialize(&TIM_TimeBaseStructure);    
    TIM_TimeBaseStructure.Prescaler = 0;
    TIM_TimeBaseStructure.CntMode   = TIM_CNT_MODE_UP;
    TIM_TimeBaseStructure.Period    = TimerPeriod;
    TIM_TimeBaseStructure.ClkDiv    = 0;
    TIM_TimeBaseStructure.RepetCnt  = 0;

    TIM_Base_Initialize(TIM1, &TIM_TimeBaseStructure);

    /* Channel 1, 2 and 3 Configuration in PWM mode */
    TIM_Output_Channel_Struct_Initialize(&TIM_OCInitStructure);    
    TIM_OCInitStructure.OcMode       = TIM_OCMODE_PWM2;
    TIM_OCInitStructure.OutputState  = TIM_OUTPUT_STATE_ENABLE;
    TIM_OCInitStructure.OutputNState = TIM_OUTPUT_NSTATE_ENABLE;
    TIM_OCInitStructure.Pulse        = Channel1Pulse;
    TIM_OCInitStructure.OcPolarity   = TIM_OC_POLARITY_LOW;
    TIM_OCInitStructure.OcNPolarity  = TIM_OCN_POLARITY_LOW;
    TIM_OCInitStructure.OcIdleState  = TIM_OC_IDLE_STATE_SET;
    TIM_OCInitStructure.OcNIdleState = TIM_OC_IDLE_STATE_RESET;
		
    TIM_Output_Channel1_Initialize(TIM1, &TIM_OCInitStructure);		
		
		TIM_OCInitStructure.Pulse = Channel2Pulse;
    TIM_Output_Channel2_Initialize(TIM1, &TIM_OCInitStructure);

    TIM_OCInitStructure.Pulse = Channel3Pulse;
    TIM_Output_Channel3_Initialize(TIM1, &TIM_OCInitStructure);


    /* Automatic Output enable, Break, dead time and lock configuration*/
    TIM_Break_And_Dead_Time_Struct_Initialize(&TIM_BDTRInitStructure);
    TIM_BDTRInitStructure.OssrState       = TIM_OSSR_STATE_ENABLE;
    TIM_BDTRInitStructure.OssiState       = TIM_OSSI_STATE_ENABLE;
    TIM_BDTRInitStructure.LockLevel       = TIM_LOCK_LEVEL_1;
    TIM_BDTRInitStructure.DeadTime        = 11;
    TIM_BDTRInitStructure.Break           = TIM_BREAK_IN_ENABLE;
    TIM_BDTRInitStructure.BreakPolarity   = TIM_BREAK_POLARITY_HIGH;
    TIM_BDTRInitStructure.AutomaticOutput = TIM_AUTO_OUTPUT_ENABLE;
    TIM_BDTRInitStructure.IomBreakEn      = true;

    TIM_Break_And_Dead_Time_Set(TIM1, &TIM_BDTRInitStructure);
				
    /* TIM enable counter */
		TIM_PWM_Output_Enable(TIM1);
    TIM_On(TIM1);

    while (1)
    {
    }
}


/**
*\*\name    RCC_Configuration.
*\*\fun     Configures the clocks.
*\*\param   none
*\*\return  none
**/
void RCC_Configuration(void)
{

    /* TIM1,GPIOA and AFIO clocks enable */
    RCC_APB_Peripheral_Clock_Enable(RCC_APB_PERIPH_TIM1 | RCC_APB_PERIPH_IOPA
                          | RCC_APB_PERIPH_AFIO);
}

/**
*\*\name    GPIO_Configuration.
*\*\fun     Configure the TIM1 Pins.
*\*\param   none
*\*\return  none
**/
void GPIO_Configuration(void)
{
    GPIO_InitType GPIO_InitStructure;

    GPIO_Structure_Initialize(&GPIO_InitStructure);
    /* GPIOA Configuration: Channel 1(TIM1) as alternate function push-pull */
    GPIO_InitStructure.Pin        = GPIO_PIN_11;
    GPIO_InitStructure.GPIO_Mode  = GPIO_MODE_AF_PP;
    GPIO_InitStructure.GPIO_Current = GPIO_LOW_DREIVE;
    GPIO_InitStructure.GPIO_Alternate = GPIO_AF0_TIM1;
    GPIO_Peripheral_Initialize(GPIOA, &GPIO_InitStructure);

	  /* GPIOA Configuration: Channel 2(TIM1) as alternate function push-pull */
	  GPIO_InitStructure.Pin        = GPIO_PIN_7;
    GPIO_InitStructure.GPIO_Alternate = GPIO_AF4_TIM1;
    GPIO_Peripheral_Initialize(GPIOA, &GPIO_InitStructure);

	  /* GPIOA Configuration: Channel 3(TIM1) as alternate function push-pull */
	  GPIO_InitStructure.Pin        = GPIO_PIN_10;
    GPIO_InitStructure.GPIO_Alternate = GPIO_AF2_TIM1;
    GPIO_Peripheral_Initialize(GPIOA, &GPIO_InitStructure);

	  /* GPIOA Configuration: Channel 1N(TIM1) as alternate function push-pull */
    GPIO_InitStructure.Pin = GPIO_PIN_5;
    GPIO_InitStructure.GPIO_Alternate = GPIO_AF2_TIM1;
    GPIO_Peripheral_Initialize(GPIOA, &GPIO_InitStructure);
		
		/* GPIOA Configuration: Channel 2N(TIM1) as alternate function push-pull */
    GPIO_InitStructure.Pin = GPIO_PIN_6;
    GPIO_InitStructure.GPIO_Alternate = GPIO_AF5_TIM1;
    GPIO_Peripheral_Initialize(GPIOA, &GPIO_InitStructure);
		
		/* GPIOA Configuration: Channel 3N(TIM1) as alternate function push-pull */
    GPIO_InitStructure.Pin = GPIO_PIN_2;
    GPIO_InitStructure.GPIO_Alternate = GPIO_AF4_TIM1;
    GPIO_Peripheral_Initialize(GPIOA, &GPIO_InitStructure);
		
    /* GPIOA Configuration: BKIN pin(TIM1) */
    GPIO_InitStructure.Pin       = GPIO_PIN_1;
    GPIO_InitStructure.GPIO_Mode = GPIO_MODE_AF_PP;
    GPIO_InitStructure.GPIO_Alternate = GPIO_AF4_TIM1;
    GPIO_Peripheral_Initialize(GPIOA, &GPIO_InitStructure);		
}







