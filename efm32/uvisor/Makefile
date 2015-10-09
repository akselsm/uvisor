###########################################################################
#
#  Copyright (c) 2013-2015, ARM Limited, All Rights Reserved
#  SPDX-License-Identifier: Apache-2.0
#
#  Licensed under the Apache License, Version 2.0 (the "License"); you may
#  not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#  http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
#  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
#
###########################################################################
PROJECT:=efm32_uvisor
ARCH:=EFM32
CONFIG:=
FAMILY?=
DEVICE?=
CPU_JLINK?=
CPU?=

export FAMILY
export DEVICE
export CPU
export CPU_JLINK
export OPT

APP_CLEAN:=
APP_CFLAGS:=-DUVISOR $(CONFIG) -Iconfig -Isrc -Ilib -Idebug

APP_SRC:=\
	src/efm32_halt.c \
	src/efm32_hw.c \
	debug/efm32_memory_map.c

include ../../core/Makefile.rules

#Test release for EFM32GG990F1024 (STK3700, watch ref)
efm32: FAMILY := GG
efm32: DEVICE := 990F1024
efm32:
	$(MAKE) efm32_release FAMILY=$(FAMILY) DEVICE=$(DEVICE)
	
#iterate over all EFM32GG targets here
efm32gg: FAMILY := GG
efm32gg: DEVICES := \
995F512 \
995F1024 \
990F512 \
990F1024 \
980F512 \
980F1024 \
942F512 \
942F1024 \
940F512 \
940F1024 \
895F512 \
895F1024 \
890F512 \
890F1024 \
880F512 \
880F1024 \
842F512 \
842F1024 \
840F512 \
840F1024 \
395F512 \
395F1024 \
390F512 \
390F1024 \
380F512 \
380F1024 \
332F512 \
332F1024 \
330F512 \
330F1024 \
295F512 \
295F1024 \
290F512 \
290F1024 \
280F512 \
280F1024 \
232F512 \
232F1024 \
230F512 \
230F1024
efm32gg:
	$(foreach DEVICE, $(DEVICES), $(MAKE) efm32_release FAMILY=$(FAMILY) DEVICE=$(DEVICE) && $(MAKE) clean && ) true
	
#iterate over all EFM32LG targets here
efm32lg: FAMILY := LG
efm32lg: DEVICES := \
995F64 \
995F128 \
995F256 \
990F64 \
990F128 \
990F256 \
980F64 \
980F128 \
980F256 \
942F64 \
942F128 \
942F256 \
940F64 \
940F128 \
940F256 \
895F64 \
895F128 \
895F256 \
890F64 \
890F128 \
890F256 \
880F64 \
880F128 \
880F256 \
842F64 \
842F128 \
842F256 \
840F64 \
840F128 \
840F256 \
395F64 \
395F128 \
395F256 \
390F64 \
390F128 \
390F256 \
380F64 \
380F128 \
380F256 \
360F64 \
360F128 \
360F256 \
332F64 \
332F128 \
332F256 \
330F64 \
330F128 \
330F256 \
295F64 \
295F128 \
295F256 \
290F64 \
290F128 \
290F256 \
280F64 \
280F128 \
280F256 \
232F64 \
232F128 \
232F256 \
230F64 \
230F128 \
230F256
efm32lg:
	$(foreach DEVICE, $(DEVICES), $(MAKE) efm32_release FAMILY=$(FAMILY) DEVICE=$(DEVICE) && $(MAKE) clean && ) true
	
#iterate over all EFM32WG targets here
efm32wg: FAMILY := WG
efm32wg: DEVICES := \
995F64 \
995F128 \
995F256 \
990F64 \
990F128 \
990F256 \
980F64 \
980F128 \
980F256 \
942F64 \
942F128 \
942F256 \
940F64 \
940F128 \
940F256 \
895F64 \
895F128 \
895F256 \
890F64 \
890F128 \
890F256 \
880F64 \
880F128 \
880F256 \
842F64 \
842F128 \
842F256 \
840F64 \
840F128 \
840F256 \
395F64 \
395F128 \
395F256 \
390F64 \
390F128 \
390F256 \
380F64 \
380F128 \
380F256 \
360F64 \
360F128 \
360F256 \
332F64 \
332F128 \
332F256 \
330F64 \
330F128 \
330F256 \
295F64 \
295F128 \
295F256 \
290F64 \
290F128 \
290F256 \
280F64 \
280F128 \
280F256 \
232F64 \
232F128 \
232F256 \
230F64 \
230F128 \
230F256
efm32wg:
	$(foreach DEVICE, $(DEVICES), $(MAKE) efm32_release FAMILY=$(FAMILY) DEVICE=$(DEVICE) && $(MAKE) clean && ) true
	
#run release on a specific target
efm32_release:
	$(MAKE) all OPT= release CPU=$(ARCH)$(FAMILY)$(DEVICE) CPU_JLINK=$(ARCH)$(FAMILY)$(DEVICE) FAMILY=$(FAMILY) DEVICE=$(DEVICE)
