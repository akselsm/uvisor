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
#elif defined(_EFM32_LEOPARD_FAMILY)
#define HW_IRQ_VECTORS 39
#elif defined(_EFM32_WONDER_FAMILY)
#define HW_IRQ_VECTORS 39
#elif defined(_EFM32_PEARL_FAMILY)
#define HW_IRQ_VECTORS 34
#elif defined(_EFM32_JADE_FAMILY)
#define HW_IRQ_VECTORS 33
#else
#error "Undefined number of IRQ vectors"
#endif

#endif/*__SYSTEM_H__*/
