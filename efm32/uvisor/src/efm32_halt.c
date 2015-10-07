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

// TODO: Add LED port and pin for all targets
#define HALT_LED_PORT 4 /* Port E */
#define HALT_LED_PIN 3

void halt_led(THaltError reason)
{
    uint32_t toggle;
    volatile uint32_t delay;

    int flag;

    /* Enable HFPER clock */
    CMU->HFPERCLKDIV |= 1 << _CMU_HFPERCLKDIV_HFPERCLKEN_SHIFT;
    /* Enable GPIO clock */
    CMU->HFPERCLKEN0 |= 1 << _CMU_HFPERCLKEN0_GPIO_SHIFT;

    /* Set HALT port/pin to push-pull */
#if  HALT_LED_PIN < 8
    GPIO->P[HALT_LED_PORT].MODEL = (GPIO->P[HALT_LED_PORT].MODEL & ~(0xF << (HALT_LED_PIN * 4))) |
                          (GPIO_P_MODEL_MODE0_PUSHPULL << (HALT_LED_PIN * 4));
#else
    GPIO->P[HALT_LED_PORT].MODEH = (GPIO->P[HALT_LED_PORT].MODEH & ~(0xF << ((HALT_LED_PIN - 8) * 4))) |
                          (GPIO_P_MODEL_MODE0_PUSHPULL << ((HALT_LED_PIN - 8) * 4));
#endif

    flag = 0;
    while(1)
    {
        for(toggle = 0; toggle < 2 * (uint32_t) reason; toggle++)
        {
            /* toggle HALT LED pin */
            GPIO->P[HALT_LED_PORT].DOUTTGL = 1 << HALT_LED_PIN;
            flag = !flag;
            for(delay = 0; delay < HALT_INTRA_PATTERN_DELAY; delay++);
        }
        for(delay = 0; delay < HALT_INTER_PATTERN_DELAY; delay++);
    }
}
