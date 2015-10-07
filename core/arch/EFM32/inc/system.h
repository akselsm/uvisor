/*
 * Copyright (c) 2013-2015, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __SYSTEM_H__
#define __SYSTEM_H__

#include "em_family.h"

/* all ISRs by default are weakly linked to the default handler */
#if defined(_EFM32_GIANT_FAMILY)
#define HW_IRQ_VECTORS 39
extern void Reset_Handler(void);
extern void NMI_Handler(void);
extern void HardFault_Handler(void);
extern void MemManage_Handler(void);
extern void BusFault_Handler(void);
extern void UsageFault_Handler(void);
extern void SVC_Handler(void);
extern void DebugMon_Handler(void);
extern void PendSV_Handler(void);
extern void SysTick_Handler(void);
extern void DMA_IRQHandler(void);
extern void GPIO_EVEN_IRQHandler(void);
extern void TIMER0_IRQHandler(void);
extern void USART0_RX_IRQHandler(void);
extern void USART0_TX_IRQHandler(void);
extern void USB_IRQHandler(void);
extern void ACMP0_IRQHandler(void);
extern void ADC0_IRQHandler(void);
extern void DAC0_IRQHandler(void);
extern void I2C0_IRQHandler(void);
extern void I2C1_IRQHandler(void);
extern void GPIO_ODD_IRQHandler(void);
extern void TIMER1_IRQHandler(void);
extern void TIMER2_IRQHandler(void);
extern void TIMER3_IRQHandler(void);
extern void USART1_RX_IRQHandler(void);
extern void USART1_TX_IRQHandler(void);
extern void LESENSE_IRQHandler(void);
extern void USART2_RX_IRQHandler(void);
extern void USART2_TX_IRQHandler(void);
extern void UART0_RX_IRQHandler(void);
extern void UART0_TX_IRQHandler(void);
extern void UART1_RX_IRQHandler(void);
extern void UART1_TX_IRQHandler(void);
extern void LEUART0_IRQHandler(void);
extern void LEUART1_IRQHandler(void);
extern void LETIMER0_IRQHandler(void);
extern void PCNT0_IRQHandler(void);
extern void PCNT1_IRQHandler(void);
extern void PCNT2_IRQHandler(void);
extern void RTC_IRQHandler(void);
extern void BURTC_IRQHandler(void);
extern void CMU_IRQHandler(void);
extern void VCMP_IRQHandler(void);
extern void LCD_IRQHandler(void);
extern void MSC_IRQHandler(void);
extern void AES_IRQHandler(void);
extern void EBI_IRQHandler(void);
extern void EMU_IRQHandler(void);
#endif

#endif/*__SYSTEM_H__*/
