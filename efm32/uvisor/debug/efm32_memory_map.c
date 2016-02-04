/*
 * Copyright (c) 2015, Silicon Labs
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS"BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <uvisor.h>
#include <memory_map.h>

static const MemMap g_mem_map[] = {
    {"FLASH",       FLASH_BASE,       FLASH_BASE       + FLASH_SIZE                },
    {"SRAM",        SRAM_BASE,        SRAM_BASE        + SRAM_SIZE                 },
#ifdef AES_MEM_BASE
    {"AES",         AES_MEM_BASE,     AES_MEM_BASE     + AES_MEM_SIZE              },
#endif
#ifdef CRYPTO_MEM_BASE
    {"CRYPTO",      CRYPTO_MEM_BASE,  CRYPTO_MEM_BASE  + CRYPTO_MEM_SIZE           },
#endif
#ifdef FPUEH_BASE
    {"FPUEH",       FPUEH_BASE,       FPUEH_BASE       + sizeof(FPUEH_TypeDef)     },
#endif
#ifdef USB_BASE
    {"USB",         USB_BASE,         USB_BASE         + 0x400                     },
#endif
#ifdef USBC_MEM_BASE
    {"USBC",        USBC_MEM_BASE,    USBC_MEM_END                                 },
#endif
    {"MSC",         MSC_BASE,         MSC_BASE         + sizeof(MSC_TypeDef)       },
    {"EMU",         EMU_BASE,         EMU_BASE         + sizeof(EMU_TypeDef)       },
    {"RMU",         RMU_BASE,         RMU_BASE         + sizeof(RMU_TypeDef)       },
    {"CMU",         CMU_BASE,         CMU_BASE         + sizeof(CMU_TypeDef)       },
#ifdef LESENSE_BASE
    {"LESENSE",     LESENSE_BASE,     LESENSE_BASE     + sizeof(LESENSE_TypeDef)   },
#endif
#ifdef RTC_BASE
    {"RTC",         RTC_BASE,         RTC_BASE         + sizeof(RTC_TypeDef)       },
#endif
#ifdef RTCC_BASE
    {"RTCC",        RTCC_BASE,        RTCC_BASE        + sizeof(RTCC_TypeDef)      },
#endif
#ifdef CRYOTIMER_BASE
    {"CRYOTIMER",   CRYOTIMER_BASE,   CRYOTIMER_BASE   + sizeof(CRYOTIMER_TypeDef) },
#endif
#ifdef LETIMER0_BASE
    {"LETIMER0",    LETIMER0_BASE,    LETIMER0_BASE    + sizeof(LETIMER_TypeDef)   },
#endif
#ifdef EBI_BASE
    {"EBI",         EBI_BASE,         EBI_BASE         + sizeof(EBI_TypeDef)       },
#endif
#ifdef USART0_BASE
    {"USART0",      USART0_BASE,      USART0_BASE      + sizeof(USART_TypeDef)     },
#endif
#ifdef USART1_BASE
    {"USART1",      USART1_BASE,      USART1_BASE      + sizeof(USART_TypeDef)     },
#endif
#ifdef USART2_BASE
    {"USART2",      USART2_BASE,      USART2_BASE      + sizeof(USART_TypeDef)     },
#endif
#ifdef UART0_BASE
    {"UART0",       UART0_BASE,       UART0_BASE       + sizeof(USART_TypeDef)     },
#endif
#ifdef UART1_BASE
    {"UART1",       UART1_BASE,       UART1_BASE       + sizeof(USART_TypeDef)     },
#endif
#ifdef TIMER0_BASE
    {"TIMER0",      TIMER0_BASE,      TIMER0_BASE      + sizeof(TIMER_TypeDef)     },
#endif
#ifdef TIMER1_BASE
    {"TIMER1",      TIMER1_BASE,      TIMER1_BASE      + sizeof(TIMER_TypeDef)     },
#endif
#ifdef TIMER2_BASE
    {"TIMER2",      TIMER2_BASE,      TIMER2_BASE      + sizeof(TIMER_TypeDef)     },
#endif
#ifdef TIMER3_BASE
    {"TIMER3",      TIMER3_BASE,      TIMER3_BASE      + sizeof(TIMER_TypeDef)     },
#endif
#ifdef ACMP0_BASE
    {"ACMP0",       ACMP0_BASE,       ACMP0_BASE       + sizeof(ACMP_TypeDef)      },
#endif
#ifdef ACMP1_BASE
    {"ACMP1",       ACMP1_BASE,       ACMP1_BASE       + sizeof(ACMP_TypeDef)      },
#endif
#ifdef I2C0_BASE
    {"I2C0",        I2C0_BASE,        I2C0_BASE        + sizeof(I2C_TypeDef)       },
#endif
#ifdef I2C1_BASE
    {"I2C1",        I2C1_BASE,        I2C1_BASE        + sizeof(I2C_TypeDef)       },
#endif
    {"GPIO",        GPIO_BASE,        GPIO_BASE        + sizeof(GPIO_TypeDef)      },
#ifdef VCMP_BASE
    {"VCMP",        VCMP_BASE,        VCMP_BASE        + sizeof(VCMP_TypeDef)      },
#endif
    {"PRS",         PRS_BASE,         PRS_BASE         + sizeof(PRS_TypeDef)       },
#ifdef LEUART0_BASE
    {"LEUART0",     LEUART0_BASE,     LEUART0_BASE     + sizeof(LEUART_TypeDef)    },
#endif
#ifdef LEUART1_BASE
    {"LEUART1",     LEUART1_BASE,     LEUART1_BASE     + sizeof(LEUART_TypeDef)    },
#endif
#ifdef PCNT0_BASE
    {"PCNT0",       PCNT0_BASE,       PCNT0_BASE       + sizeof(PCNT_TypeDef)      },
#endif
#ifdef PCNT1_BASE
    {"PCNT1",       PCNT1_BASE,       PCNT1_BASE       + sizeof(PCNT_TypeDef)      },
#endif
#ifdef PCNT2_BASE
    {"PCNT2",       PCNT2_BASE,       PCNT2_BASE       + sizeof(PCNT_TypeDef)      },
#endif
#ifdef ADC0_BASE
    {"ADC0",        ADC0_BASE,        ADC0_BASE        + sizeof(ADC_TypeDef)       },
#endif
#ifdef DAC0_BASE
    {"DAC0",        DAC0_BASE,        DAC0_BASE        + sizeof(DAC_TypeDef)       },
#endif
#ifdef LCD_BASE
    {"LCD",         LCD_BASE,         LCD_BASE         + sizeof(LCD_TypeDef)       },
#endif
#ifdef IDAC0_BASE
    {"IDAC0",       IDAC0_BASE,       IDAC0_BASE       + sizeof(IDAC_TypeDef)      },
#endif
#ifdef BURTC_BASE
    {"BURTC",       BURTC_BASE,       BURTC_BASE       + sizeof(BURTC_TypeDef)     },
#endif
#ifdef WDOG
    {"WDOG",        WDOG_BASE,        WDOG_BASE        + sizeof(WDOG_TypeDef)      },
#endif
#ifdef WDOG0
    {"WDOG0",       WDOG0_BASE,       WDOG0_BASE       + sizeof(WDOG_TypeDef)      },
#endif
#ifdef GPCRC_BASE
    {"GPCRC",       GPCRC_BASE,       GPCRC_BASE       + sizeof(GPCRC_TypeDef)     },
#endif
#ifdef LDMA_BASE
    {"LDMA",        LDMA_BASE,        LDMA_BASE        + sizeof(LDMA_TypeDef)      },
#endif
#ifdef ETM_BASE
    {"ETM",         ETM_BASE,         ETM_BASE         + sizeof(ETM_TypeDef)       },
#endif
#ifdef CALIBRATE_BASE
    {"CALIBRATE",   CALIBRATE_BASE,   CALIBRATE_BASE   + sizeof(CALIBRATE_TypeDef) },
#endif
    {"DEVINFO",     DEVINFO_BASE,     DEVINFO_BASE     + sizeof(DEVINFO_TypeDef)   },
    {"ITM",         ITM_BASE,         ITM_BASE         + sizeof(ITM_Type)          },
    {"DWT",         DWT_BASE,         DWT_BASE         + sizeof(DWT_Type)          },
    {"SysTick",     SysTick_BASE,     SysTick_BASE     + sizeof(SysTick_Type)      },
    {"NVIC",        NVIC_BASE,        NVIC_BASE        + sizeof(NVIC_Type)         },
    {"SCB",         SCB_BASE,         SCB_BASE         + sizeof(SCB_Type)          },
    {"MPU",         MPU_BASE,         MPU_BASE         + sizeof(MPU_Type)          },
    {"CoreDebug",   CoreDebug_BASE,   CoreDebug_BASE   + sizeof(CoreDebug_Type)    },
    {"BITBAND_PER", BITBAND_PER_BASE, BITBAND_PER_BASE + 32 * PER_MEM_SIZE         },
    {"BITBAND_RAM", BITBAND_RAM_BASE, BITBAND_RAM_BASE + 32 * RAM_MEM_SIZE         },
#ifdef PER_BITSET_MEM_BASE
    {"PER_BITSET",  PER_BITSET_MEM_BASE, PER_BITSET_MEM_BASE + PER_BITSET_MEM_SIZE },
    {"PER_BITCLR",  PER_BITCLR_MEM_BASE, PER_BITCLR_MEM_BASE + PER_BITCLR_MEM_SIZE },
#endif
#ifdef CRYPTO_BITSET_MEM_BASE
    {"CRYPTO_BITSET", CRYPTO_BITSET_MEM_BASE, CRYPTO_BITSET_MEM_BASE + CRYPTO_BITSET_MEM_SIZE },
    {"CRYPTO_BITCLR", CRYPTO_BITCLR_MEM_BASE, CRYPTO_BITCLR_MEM_BASE + CRYPTO_BITCLR_MEM_SIZE },
#endif
};

const MemMap* memory_map_name(uint32_t addr)
{
    int i;
    const MemMap *map; 
    
    /* check if the faulting address is in the bitband region */
    if ((addr >= BITBAND_PER_BASE) && (addr < (BITBAND_PER_BASE + 32 * PER_MEM_SIZE))) {
        addr = ((addr - BITBAND_PER_BASE) >> 5) & ~0x3;
        addr += PER_MEM_BASE;
    }
    
    /* find system memory region */
    map = g_mem_map;
    for(i = 0; i < UVISOR_ARRAY_COUNT(g_mem_map); i++)
        if((addr >= map->base) && (addr <= map->end))
            return map;
        else
            map++;

    return NULL;
}
