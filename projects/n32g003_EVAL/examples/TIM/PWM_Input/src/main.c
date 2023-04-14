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


TIM_ICInitType TIM_ICInitStructure;
uint16_t gOnePulsEn = 0;



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

	  /* NVIC configuration */
    NVIC_Configuration();
	
    /* Configure the GPIO ports */
    GPIO_Configuration();


    /* TIM3 configuration: PWM Input mode ------------------------
     The external signal is connected to TIM3 CH2 pin (PA2),
     The Rising edge is used as active edge,
     The TIM3 CCDAT2 is used to compute the frequency value
     The TIM3 CCDAT1 is used to compute the duty cycle value
    ------------------------------------------------------------ */
    TIM_Input_Struct_Initialize(&TIM_ICInitStructure);
    TIM_ICInitStructure.Channel     = TIM_CH_2;
    TIM_ICInitStructure.IcPolarity  = TIM_IC_POLARITY_RISING;
    TIM_ICInitStructure.IcSelection = TIM_IC_SELECTION_DIRECTTI;
    TIM_ICInitStructure.IcPrescaler = TIM_IC_PSC_DIV1;
    TIM_ICInitStructure.IcFilter    = 0x0;
    TIM_PWM_Input_Channel_Config(TIM3, &TIM_ICInitStructure);

		
    /* Select the TIM3 Input Trigger: TI2FP2 */
    TIM_Trigger_Source_Select(TIM3, TIM_TRIG_SEL_TI2FP2);

    /* Select the slave Mode: Reset Mode */
    TIM_Slave_Mode_Select(TIM3, TIM_SLAVE_MODE_RESET);

    /* Enable the Master/Slave Mode */
    TIM_Master_Slave_Mode_Set(TIM3, TIM_MASTER_SLAVE_MODE_ENABLE);
		
		
    /* TIM enable counter */
    TIM_On(TIM3);

    /* Enable the CC2 Interrupt Request */
    TIM_Interrupt_Enable(TIM3,TIM_INT_CC2);


    while (1)
    {
        Two_Rising_Edge_Generate();
    }
}


/**
*\*\name    Two_Rising_Edge_Generate.
*\*\fun     generation two rising edge
*\*\param   none
*\*\return  none
**/
void Two_Rising_Edge_Generate(void)
{
    if (gOnePulsEn)
    {
        gOnePulsEn = 0;	
        GPIO_Pins_Set(GPIOA, GPIO_PIN_3);
        {
            uint32_t i = 0;
            while (i++ < 50)
                ;
        }
        GPIO_PBC_Pins_Reset(GPIOA, GPIO_PIN_3);
        {
            uint32_t i = 0;
            while (i++ < 50)
                ;
        }

        GPIO_Pins_Set(GPIOA, GPIO_PIN_3);
        {
            uint32_t i = 0;
            while (i++ < 50)
                ;
        }
        GPIO_PBC_Pins_Reset(GPIOA, GPIO_PIN_3);
        {
            uint32_t i = 0;
            while (i++ < 50)
                ;
        }
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

    /* TIM3, GPIOA and AFIO clocks enable */
    RCC_APB_Peripheral_Clock_Enable(RCC_APB_PERIPH_TIM3 | RCC_APB_PERIPH_IOPA
                          | RCC_APB_PERIPH_AFIO);
}

/**
*\*\name    GPIO_Configuration.
*\*\fun     Configure the Pins.
*\*\param   none
*\*\return  none
**/
void GPIO_Configuration(void)
{
    GPIO_InitType GPIO_InitStructure;

    GPIO_Structure_Initialize(&GPIO_InitStructure);
    /* GPIOA Configuration: Channel 2 as alternate function push-pull */
    GPIO_InitStructure.Pin        = GPIO_PIN_2;
    GPIO_InitStructure.GPIO_Mode  = GPIO_MODE_INPUT;
    GPIO_InitStructure.GPIO_Current = GPIO_LOW_DREIVE;
    GPIO_InitStructure.GPIO_Alternate = GPIO_AF2_TIM3;
    GPIO_Peripheral_Initialize(GPIOA, &GPIO_InitStructure);

    /* GPIOA Configuration: PA3 as alternate function push-pull */	
    GPIO_InitStructure.Pin       = GPIO_PIN_3;
    GPIO_InitStructure.GPIO_Mode = GPIO_MODE_OUT_PP;
    GPIO_Peripheral_Initialize(GPIOA, &GPIO_InitStructure);
	
}

/**
*\*\name    NVIC_Configuration.
*\*\fun     Configures the nested vectored interrupt controller.
*\*\param   none
*\*\return  none
**/
void NVIC_Configuration(void)
{
    NVIC_InitType NVIC_InitStructure;

    /* Enable the TIM3 global Interrupt */
    NVIC_InitStructure.NVIC_IRQChannel                   = TIM3_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPriority           = 1;
    NVIC_InitStructure.NVIC_IRQChannelCmd                = ENABLE;
    NVIC_Initializes(&NVIC_InitStructure);
}



