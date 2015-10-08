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

#iterate over all EFM32 targets here
efm32: FAMILY := GG
efm32: DEVICE := 990F1024
efm32:
	$(MAKE) efm32_release FAMILY=$(FAMILY) DEVICE=$(DEVICE)
	
#run release on a specific target
efm32_release:
	$(MAKE) all OPT= release CPU=$(ARCH)$(FAMILY)$(DEVICE) CPU_JLINK=$(ARCH)$(FAMILY)$(DEVICE) FAMILY=$(FAMILY) DEVICE=$(DEVICE)
