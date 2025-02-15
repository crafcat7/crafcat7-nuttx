/****************************************************************************
 * arch/arm/src/stm32l4/hardware/stm32l4_pinmap.h
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __ARCH_ARM_SRC_STM32L4_HARDWARE_STM32L4_PINMAP_H
#define __ARCH_ARM_SRC_STM32L4_HARDWARE_STM32L4_PINMAP_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "chip.h"
#if defined(CONFIG_STM32L4_USE_LEGACY_PINMAP)
#  if defined(CONFIG_STM32L4_STM32L4X3)
#    include "hardware/stm32l4x3xx_pinmap_legacy.h"
#  elif defined(CONFIG_STM32L4_STM32L4X5)
#    include "hardware/stm32l4x5xx_pinmap_legacy.h"
#  elif defined(CONFIG_STM32L4_STM32L4X6)
#    include "hardware/stm32l4x6xx_pinmap_legacy.h"
#  elif defined(CONFIG_STM32L4_STM32L4XR)
#    include "hardware/stm32l4xrxx_pinmap_legacy.h"
#  else
#    error "Unsupported STM32 L4 pin map"
#  endif
#else
#  if defined(CONFIG_STM32L4_STM32L4X3)
#    include "hardware/stm32l4x3xx_pinmap.h"
#  elif defined(CONFIG_STM32L4_STM32L4X5)
#    include "hardware/stm32l4x5xx_pinmap.h"
#  elif defined(CONFIG_STM32L4_STM32L4X6)
#    include "hardware/stm32l4x6xx_pinmap.h"
#  elif defined(CONFIG_STM32L4_STM32L4XR)
#    include "hardware/stm32l4xrxx_pinmap.h"
#  else
#    error "Unsupported STM32 L4 pin map"
#  endif
#endif

#endif /* __ARCH_ARM_SRC_STM32L4_HARDWARE_STM32L4_PINMAP_H */
