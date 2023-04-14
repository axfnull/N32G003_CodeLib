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
#include <stdio.h>
#include <stdint.h>
#include "log.h"

/**
*\*\name    main.
*\*\fun     Main program.
*\*\param   none
*\*\return  none
**/
int main(void)
{
    /* Initialize UART */
    log_init();
    log_info("This is a demo of PVD.\n");
    /* Initialize LED */
    LEDInit(LED1);
    LedOff(LED1);
    /* Enable PWR clock */
    RCC_APB_Peripheral_Clock_Enable(RCC_APB_PERIPH_PWR);

    /* Configure EXTI Line to generate an interrupt on falling edge */
    EXTI_Configuration();

    /* NVIC configuration */
    NVIC_Configuration();

    /* Configure the PVD Level to 2.2V ,from 1.8V ~ 4.8V,one step mean add 200mv*/
    PWR_PVD_Level_Config(PWR_PVD_LEVEL_2V2);
    
    /* Enable the PVD Interrupt */
    PWR_PVD_Interrupt_Enable();

    /* Enable the PVD Output */
    PWR_PVD_Enable();

    while (1)
    {
    }
}

/**
*\*\name    EXTI_Configuration.
*\*\fun     Configures EXTI Lines.
*\*\param   none
*\*\return  none
**/
void EXTI_Configuration(void)
{
    EXTI_InitType EXTI_InitStructure;

    /* Configure EXTI Line18(PVD Output) to generate an interrupt on rising and
       falling edges */
    EXTI_Flag_Status_Clear(EXTI_LINE18);
    EXTI_InitStructure.EXTI_Line    = EXTI_LINE18;
    EXTI_InitStructure.EXTI_Mode    = EXTI_Mode_Interrupt;
    EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Rising_Falling;
    EXTI_InitStructure.EXTI_LineCmd = ENABLE;
    EXTI_Peripheral_Initializes(&EXTI_InitStructure);
}

/**
*\*\name    NVIC_Configuration.
*\*\fun     Configure the nested vectored interrupt controller.
*\*\param   none
*\*\return  none
**/
void NVIC_Configuration(void)
{
    NVIC_InitType NVIC_InitStructure;

    /* Enable the PVD Interrupt */
    NVIC_InitStructure.NVIC_IRQChannel         = PVD_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPriority = NVIC_PRIORITY_0;
    NVIC_InitStructure.NVIC_IRQChannelCmd      = ENABLE;
    NVIC_Initializes(&NVIC_InitStructure);
}

/**
*\*\name    Ledlink.
*\*\fun     Toggles the selected Led.
*\*\param   GPIOx
*\*\param   Pin
*\*\return  none
**/
void Ledlink(uint16_t Pin)
{
    GPIOA->POD ^= Pin;
}

/**
*\*\name    LedOn.
*\*\fun     Turns selected Led on.
*\*\param   Pin
*\*\return  none
**/
void LedOn(uint16_t Pin)
{
    GPIOA->PBSC = Pin;
}

/**
*\*\name    LedOff.
*\*\fun     Turns selected Led Off.
*\*\param   Pin
*\*\return  none
**/
void LedOff(uint16_t Pin)
{
    GPIOA->PBC = Pin;
}

/**
*\*\name    LEDInit.
*\*\fun     Configures LED GPIO.
*\*\param   Pin
*\*\return  none
**/
void LEDInit(uint16_t Pin)
{
    GPIO_InitType GPIO_InitStructure;

    /* Enable the GPIO_LED Clock */
    RCC_APB_Peripheral_Clock_Enable(RCC_APB_PERIPH_IOPA);

    GPIO_Structure_Initialize(&GPIO_InitStructure);
    /* Configure the GPIO_LED pin */
    GPIO_InitStructure.Pin       = Pin;
    GPIO_InitStructure.GPIO_Mode = GPIO_MODE_OUT_PP;

    GPIO_Peripheral_Initialize(GPIOA, &GPIO_InitStructure);
}

