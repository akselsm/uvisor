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
#if defined(FAMILY_GG)
#include "../efm32gg/src/system.c"
#elif defined(FAMILY_LG)
#include "../efm32lg/src/system.c"
#elif defined(FAMILY_WG)
#include "../efm32wg/src/system.c"
#elif defined(FAMILY_PG1B)
#include "../efm32pg1b/src/system.c"
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
#if defined(_EFM32_GIANT_FAMILY) || defined(_EFM32_LEOPARD_FAMILY) || defined(_EFM32_WONDER_FAMILY)
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
#elif defined(_EFM32_PEARL_FAMILY) || defined(_EFM32_JADE_FAMILY)
void UVISOR_ALIAS(isr_default_handler)     EMU_IRQHandler(void);          /* 0  - EMU */
void UVISOR_ALIAS(isr_default_handler)     WDOG0_IRQHandler(void);        /* 2  - WDOG0 */
void UVISOR_ALIAS(isr_default_handler)     LDMA_IRQHandler(void);         /* 8  - LDMA */
void UVISOR_ALIAS(isr_default_handler)     GPIO_EVEN_IRQHandler(void);    /* 9  - GPIO_EVEN */
void UVISOR_ALIAS(isr_default_handler)     TIMER0_IRQHandler(void);       /* 10 - TIMER0 */
void UVISOR_ALIAS(isr_default_handler)     USART0_RX_IRQHandler(void);    /* 11 - USART0_RX */
void UVISOR_ALIAS(isr_default_handler)     USART0_TX_IRQHandler(void);    /* 12 - USART0_TX */
void UVISOR_ALIAS(isr_default_handler)     ACMP0_IRQHandler(void);        /* 13 - ACMP0 */
void UVISOR_ALIAS(isr_default_handler)     ADC0_IRQHandler(void);         /* 14 - ADC0 */
void UVISOR_ALIAS(isr_default_handler)     IDAC0_IRQHandler(void);        /* 15 - IDAC0 */
void UVISOR_ALIAS(isr_default_handler)     I2C0_IRQHandler(void);         /* 16 - I2C0 */
void UVISOR_ALIAS(isr_default_handler)     GPIO_ODD_IRQHandler(void);     /* 17 - GPIO_ODD */
void UVISOR_ALIAS(isr_default_handler)     TIMER1_IRQHandler(void);       /* 18 - TIMER1 */
void UVISOR_ALIAS(isr_default_handler)     USART1_RX_IRQHandler(void);    /* 19 - USART1_RX */
void UVISOR_ALIAS(isr_default_handler)     USART1_TX_IRQHandler(void);    /* 20 - USART1_TX */
void UVISOR_ALIAS(isr_default_handler)     LEUART0_IRQHandler(void);      /* 21 - LEUART0 */
void UVISOR_ALIAS(isr_default_handler)     PCNT0_IRQHandler(void);        /* 22 - PCNT0 */
void UVISOR_ALIAS(isr_default_handler)     CMU_IRQHandler(void);          /* 23 - CMU */
void UVISOR_ALIAS(isr_default_handler)     MSC_IRQHandler(void);          /* 24 - MSC */
void UVISOR_ALIAS(isr_default_handler)     CRYPTO_IRQHandler(void);       /* 25 - CRYPTO */
void UVISOR_ALIAS(isr_default_handler)     LETIMER0_IRQHandler(void);     /* 26 - LETIMER0 */
void UVISOR_ALIAS(isr_default_handler)     RTCC_IRQHandler(void);         /* 29 - RTCC */
void UVISOR_ALIAS(isr_default_handler)     CRYOTIMER_IRQHandler(void);    /* 31 - CRYOTIMER */
#if defined(_EFM32_PEARL_FAMILY)
void UVISOR_ALIAS(isr_default_handler)     FPUEH_IRQHandler(void);        /* 33 - FPUEH */
#endif
#endif

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
#if defined(_EFM32_GIANT_FAMILY) || defined(_EFM32_WONDER_FAMILY)
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
#elif defined(_EFM32_PEARL_FAMILY) || defined(_EFM32_JADE_FAMILY)
    EMU_IRQHandler,                       /* 0  - EMU */
    isr_default_handler,                  /* 1  - Reserved */
    WDOG0_IRQHandler,                     /* 2  - WDOG0 */
    isr_default_handler,                  /* 3  - Reserved */
    isr_default_handler,                  /* 4  - Reserved */
    isr_default_handler,                  /* 5  - Reserved */
    isr_default_handler,                  /* 6  - Reserved */
    isr_default_handler,                  /* 7  - Reserved */
    LDMA_IRQHandler,                      /* 8  - LDMA */
    GPIO_EVEN_IRQHandler,                 /* 9  - GPIO_EVEN */
    TIMER0_IRQHandler,                    /* 10 - TIMER0 */
    USART0_RX_IRQHandler,                 /* 11 - USART0_RX */
    USART0_TX_IRQHandler,                 /* 12 - USART0_TX */
    ACMP0_IRQHandler,                     /* 13 - ACMP0 */
    ADC0_IRQHandler,                      /* 14 - ADC0 */
    IDAC0_IRQHandler,                     /* 15 - IDAC0 */
    I2C0_IRQHandler,                      /* 16 - I2C0 */
    GPIO_ODD_IRQHandler,                  /* 17 - GPIO_ODD */
    TIMER1_IRQHandler,                    /* 18 - TIMER1 */
    USART1_RX_IRQHandler,                 /* 19 - USART1_RX */
    USART1_TX_IRQHandler,                 /* 20 - USART1_TX */
    LEUART0_IRQHandler,                   /* 21 - LEUART0 */
    PCNT0_IRQHandler,                     /* 22 - PCNT0 */
    CMU_IRQHandler,                       /* 23 - CMU */
    MSC_IRQHandler,                       /* 24 - MSC */
    CRYPTO_IRQHandler,                    /* 25 - CRYPTO */
    LETIMER0_IRQHandler,                  /* 26 - LETIMER0 */
    isr_default_handler,                  /* 27 - Reserved */
    isr_default_handler,                  /* 28 - Reserved */
    RTCC_IRQHandler,                      /* 29 - RTCC */
    isr_default_handler,                  /* 30 - Reserved */
    CRYOTIMER_IRQHandler,                 /* 31 - CRYOTIMER */
    isr_default_handler,                  /* 32 - Reserved */
#if defined(_EFM32_PEARL_FAMILY)
    FPUEH_IRQHandler,                     /* 33 - FPUEH */
#endif
#endif
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
