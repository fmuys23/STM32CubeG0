/**
  ******************************************************************************
  * @file    stm32g0xx_it.h
  * @brief   This file contains the headers of the interrupt handlers.
  ******************************************************************************
   * @attention
  *
  * Copyright (c) 2018 STMicroelectronics. All rights reserved.
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32G0xx_IT_H
#define __STM32G0xx_IT_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void NMI_Handler(void);
void HardFault_Handler(void);
void SysTick_Handler(void);
void UCPD1_2_IRQHandler(void);
void DMA1_Ch4_7_DMAMUX1_OVR_IRQHandler(void);
void ADC1_COMP_IRQHandler(void);
void DMA1_Channel1_IRQHandler(void);
void EXTI4_15_IRQHandler(void);
void EXTI0_1_IRQHandler(void);
void EXTI2_3_IRQHandler(void);
void USART3_4_LPUART1_IRQHandler(void);
void DEBOUNCE_TIM_IRQHandler(void);

#ifdef __cplusplus
}
#endif

#endif /* __STM32G0xx_IT_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
