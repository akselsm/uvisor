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
#include <uvisor.h>
#include "halt.h"
#include "unvic.h"
#include "system.h"

/* To not break the uvisor makefile, add in EFM32-specific source here */
#if defined(FAMILY_GG) || defined(FAMILY_LG) || defined(FAMILY_WG)
#include "system_efm32gg.c"
#else
#error "System.c: Unknown family"
#endif

/* all ISRs by default are weakly linked to the default handler */
void UVISOR_ALIAS(isr_default_sys_handler) NonMaskableInt_IRQn_Handler(void);
void UVISOR_ALIAS(isr_default_sys_handler) HardFault_IRQn_Handler(void);
void UVISOR_ALIAS(isr_default_sys_handler) MemoryManagement_IRQn_Handler(void);
void UVISOR_ALIAS(isr_default_sys_handler) BusFault_IRQn_Handler(void);
void UVISOR_ALIAS(isr_default_sys_handler) UsageFault_IRQn_Handler(void);
void UVISOR_ALIAS(isr_default_sys_handler) SVCall_IRQn_Handler(void);
void UVISOR_ALIAS(isr_default_sys_handler) DebugMonitor_IRQn_Handler(void);
void UVISOR_ALIAS(isr_default_sys_handler) PendSV_IRQn_Handler(void);
void UVISOR_ALIAS(isr_default_sys_handler) SysTick_IRQn_Handler(void);
void UVISOR_ALIAS(isr_default_handler)     DMA_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     GPIO_EVEN_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     TIMER0_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     USART0_RX_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     USART0_TX_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     USB_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     ACMP0_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     ADC0_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     DAC0_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     I2C0_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     I2C1_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     GPIO_ODD_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     TIMER1_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     TIMER2_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     TIMER3_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     USART1_RX_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     USART1_TX_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     LESENSE_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     USART2_RX_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     USART2_TX_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     UART0_RX_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     UART0_TX_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     UART1_RX_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     UART1_TX_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     LEUART0_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     LEUART1_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     LETIMER0_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     PCNT0_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     PCNT1_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     PCNT2_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     RTC_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     BURTC_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     CMU_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     VCMP_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     LCD_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     MSC_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     AES_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     EBI_IRQHandler(void);
void UVISOR_ALIAS(isr_default_handler)     EMU_IRQHandler(void);

/* vector table; it will be placed in Flash */
__attribute__((section(".isr")))
const TIsrVector g_isr_vector[ISR_VECTORS] =
{
	/* initial stack pointer */
	(TIsrVector)&__stack_top__,

	/* system interrupts */
	&main_entry,                           /* -15 */
	NonMaskableInt_IRQn_Handler,           /* -14 */
	HardFault_IRQn_Handler,                /* -13 */
	MemoryManagement_IRQn_Handler,         /* -12 */
	BusFault_IRQn_Handler,                 /* -11 */
	UsageFault_IRQn_Handler,               /* -10 */
	isr_default_sys_handler,               /* - 9 */
	isr_default_sys_handler,               /* - 8 */
	isr_default_sys_handler,               /* - 7 */
	isr_default_sys_handler,               /* - 6 */
	SVCall_IRQn_Handler,                   /* - 5 */
	DebugMonitor_IRQn_Handler,             /* - 4 */
	isr_default_sys_handler,               /* - 3 */
	PendSV_IRQn_Handler,                   /* - 2 */
	SysTick_IRQn_Handler,                  /* - 1 */

	/* peripheral interrupts */
	DMA_IRQHandler,                       /*   0 */
	GPIO_EVEN_IRQHandler,                 /*   1 */
	TIMER0_IRQHandler,                    /*   2 */
	USART0_RX_IRQHandler,                 /*   3 */
	USART0_TX_IRQHandler,                 /*   4 */
	USB_IRQHandler,                       /*   5 */
	ACMP0_IRQHandler,                     /*   6 */
	ADC0_IRQHandler,                      /*   7 */
	DAC0_IRQHandler,                      /*   8 */
	I2C0_IRQHandler,                      /*   9 */
	I2C1_IRQHandler,                      /*  10 */
	GPIO_ODD_IRQHandler,                  /*  11 */
	TIMER1_IRQHandler,                    /*  12 */
	TIMER2_IRQHandler,                    /*  13 */
	TIMER3_IRQHandler,                    /*  14 */
	USART1_RX_IRQHandler,                 /*  15 */
	USART1_TX_IRQHandler,                 /*  16 */
	LESENSE_IRQHandler,                   /*  17 */
	USART2_RX_IRQHandler,                 /*  18 */
	USART2_TX_IRQHandler,                 /*  19 */
	UART0_RX_IRQHandler,                  /*  20 */
	UART0_TX_IRQHandler,                  /*  21 */
	UART1_RX_IRQHandler,                  /*  22 */
	UART1_TX_IRQHandler,                  /*  23 */
	LEUART0_IRQHandler,                   /*  24 */
	LEUART1_IRQHandler,                   /*  25 */
	LETIMER0_IRQHandler,                  /*  26 */
	PCNT0_IRQHandler,                     /*  27 */
	PCNT1_IRQHandler,                     /*  28 */
	PCNT2_IRQHandler,                     /*  29 */
	RTC_IRQHandler,                       /*  30 */
	BURTC_IRQHandler,                     /*  31 */
	CMU_IRQHandler,                       /*  32 */
	VCMP_IRQHandler,                      /*  33 */
	LCD_IRQHandler,                       /*  34 */
	MSC_IRQHandler,                       /*  35 */
	AES_IRQHandler,                       /*  36 */
	EBI_IRQHandler,                       /*  37 */
	EMU_IRQHandler,                       /*  38 */
};

void UVISOR_NAKED UVISOR_NORETURN isr_default_sys_handler(void)
{
	/* the multiplexer will execute the correct handler depending on the IRQn */
	vmpu_sys_mux();
}

void UVISOR_NAKED UVISOR_NORETURN isr_default_handler(void)
{
	/* the multiplexer will execute the correct handler depending on the IRQn */
	unvic_isr_mux();
}
