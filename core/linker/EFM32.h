/*
 * Copyright (c) 2013-2014, ARM Limited, All Rights Reserved
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
#ifndef _EFM32_H_
#define _EFM32_H_

#if defined(ARCH_EFM32)

#if defined(FAMILY_GG)
#if defined(EFM32GG230F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG230F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG232F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG232F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG280F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG280F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG290F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG290F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG295F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG295F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG330F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG330F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG332F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG332F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG380F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG380F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG390F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG390F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG395F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG395F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG840F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG840F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG842F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG842F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG880F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG880F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG890F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG890F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG895F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG895F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG900F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG900F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG940F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG940F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG942F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG942F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG980F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG980F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG990F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG990F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG995F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000

#elif defined(EFM32GG995F512)
#define _FLASH_SIZE  0x00080000
#define _SRAM_SIZE   0x00020000

#else
#error "Unsupported MCU in EFM32GG family"
#endif //GG family if-elif

#elif defined(FAMILY_LG)
#if defined(EFM32LG230F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG230F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG230F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG232F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG232F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG232F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG280F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG280F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG280F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG290F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG290F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG290F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG295F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG295F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG295F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG330F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG330F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG330F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG332F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG332F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG332F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG360F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG360F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG360F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG380F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG380F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG380F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG390F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG390F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG390F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG395F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG395F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG395F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG840F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG840F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG840F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG842F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG842F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG842F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG880F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG880F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG880F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG890F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG890F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG890F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG895F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG895F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG895F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG900F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG940F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG940F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG940F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG942F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG942F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG942F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG980F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG980F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG980F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG990F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG990F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG990F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG995F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG995F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32LG995F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#else
#error "Unsupported MCU in EFM32LG family"
#endif //LG family if-elif

#elif defined(FAMILY_WG)
#if defined(EFM32WG230F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG230F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG230F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG232F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG232F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG232F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG280F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG280F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG280F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG290F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG290F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG290F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG295F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG295F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG295F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG330F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG330F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG330F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG332F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG332F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG332F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG360F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG360F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG360F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG380F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG380F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG380F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG390F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG390F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG390F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG395F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG395F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG395F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG840F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG840F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG840F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG842F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG842F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG842F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG880F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG880F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG880F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG890F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG890F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG890F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG895F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG895F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG895F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG900F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG940F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG940F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG940F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG942F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG942F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG942F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG980F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG980F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG980F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG990F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG990F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG990F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG995F128)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG995F256)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32WG995F64)
#define _FLASH_SIZE  0x00010000
#define _SRAM_SIZE   0x00008000

#else
#error "Unsupported MCU in EFM32WG family"
#endif // WG family if-elif

#elif defined(FAMILY_PG1B)
#if defined(EFM32PG1B100F128GM32)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32PG1B100F256GM32)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32PG1B200F128GM32)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32PG1B200F256GM32)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32PG1B200F128GM48)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32PG1B200F256GM48)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#else
#error "Unsupported MCU in EFM32PG1B family"
#endif // PG1B family if-elif

#elif defined(FAMILY_JG1B)
#if defined(EFM32JG1B100F128GM32)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32JG1B100F256GM32)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32JG1B200F128GM32)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32JG1B200F256GM32)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32JG1B200F128GM48)
#define _FLASH_SIZE  0x00020000
#define _SRAM_SIZE   0x00008000

#elif defined(EFM32JG1B200F256GM48)
#define _FLASH_SIZE  0x00040000
#define _SRAM_SIZE   0x00008000

#else
#error "Unsupported MCU in EFM32JG1B family"
#endif // JG1B family if-elif

#endif //FAMILY if-elif

#else
#error "Unsupported architecture"
#endif //ARCH_EFM32

#define FLASH_ORIGIN 0x00000000
#define FLASH_LENGTH _FLASH_SIZE

#define SRAM_ORIGIN  0x20000000
#define SRAM_LENGTH  _SRAM_SIZE

#endif //_EFM32_H_
