#ifndef STM32_CONFIGURATION_H
#define STM32_CONFIGURATION_H

#include <stm32f4xx.h>

/**
  * @brief  STM32F4 Discovery LED Pins
  */
#define GREEN_LED	                     GPIO_Pin_12
#define ORANGE_LED	                     GPIO_Pin_13
#define RED_LED		                     GPIO_Pin_14
#define BLUE_LED	                     GPIO_Pin_15
#define LED_PORT			             GPIOD

/**
  * @brief  USART related settings
  */
#define COMMANDLINE_USART	USART2
#define DEBUG_USART			USART2

/**
  * @brief  ADC related settings
  */
#define ADC_A                     	ADC3
#define ADC_A_CHANNEL             	ADC_Channel_12
#define ADC_A_CLK                 	RCC_APB2Periph_ADC3
#define ADC_A_CHANNEL_GPIO_CLK    	RCC_AHB1Periph_GPIOC
#define ADC_A_GPIO_PIN            	GPIO_Pin_2
#define ADC_A_GPIO_PORT           	GPIOC
#define ADC_A_DMA_CLK				RCC_AHB1Periph_DMA2
#define ADC_A_DMA_CHANNELx        	DMA_Channel_2
#define ADC_A_DMA_STREAMx         	DMA2_Stream0
#define ADC_A_IRQ_DMA_STREAMx     	DMA2_Stream0_IRQn
#define ADC_A_DR_ADDRESS     	  	((uint32_t)0x4001224C)
#define ADC_A_DMA_Stream_IRQHandler	DMA2_Stream0_IRQHandler

void RCC_Configuration(void);
void GPIO_Configuration(void);
void NVIC_Configuration(void);
void USART_Configuration(void);

#endif /*STM32_CONFIGURATION_H */