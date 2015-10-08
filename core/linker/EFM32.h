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
#if defined(EFM32GG990F1024)
#define _FLASH_SIZE  0x00100000
#define _SRAM_SIZE   0x00020000
#else
#error "Unsupported MCU"
#endif


#define FLASH_ORIGIN 0x00000000
#define FLASH_LENGTH _FLASH_SIZE

#define SRAM_ORIGIN  0x20000000
#define SRAM_LENGTH  _SRAM_SIZE

