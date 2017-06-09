/**
  ******************************************************************************
  * @file    main.h 
  * @author  Central LAB
  * @version V2.2.0
  * @date    29-September-2015
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2015 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#ifdef USE_STM32F4XX_NUCLEO
#include "stm32f4xx_hal.h"
  #ifdef OSX_BMS_NUCLEO
    #if defined(STM32F401xE)
      #include "stm32f4xx_nucleo.h"
    #elif defined(STM32F429xx)
      #include "stm32f4xx_nucleo_144.h"
    #endif
      #include "stm32f4xx_hal_conf.h"
  #elif OSX_BMS_BLUECOIN
    #include "BlueCoinPlus.h"
    #endif /* OSX_BMS_NUCLEO */
#endif /* USE_STM32F4XX_NUCLEO */

#ifdef USE_STM32L4XX_NUCLEO
#include "stm32l4xx_hal.h"
  #ifdef OSX_BMS_NUCLEO
    #include "stm32l4xx_nucleo.h"
    #include "stm32l4xx_hal_conf.h"
  #elif OSX_BMS_SENSORTILE
    #include "stm32l4xx_hal_conf.h"
    #include "stm32l4xx_hal_def.h"
#endif /* OSX_BMS_NUCLEO */
#endif /* USE_STM32L4XX_NUCLEO */

/* Exported functions ------------------------------------------------------- */

/* Exported defines and variables  ------------------------------------------------------- */

#endif /* __MAIN_H */

/******************* (C) COPYRIGHT 2015 STMicroelectronics *****END OF FILE****/
