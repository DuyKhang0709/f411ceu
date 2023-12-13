/**
 ******************************************************************************
 * @file extern_variables_functions_for_h.h
 * @author Nguyen_Sang - HK Company
 * @version
 * @date 04-18-2017
 ******************************************************************************
 * @source
 *
 ******************************************************************************
 */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __extern_variables_functions_for_h_H
#define __extern_variables_functions_for_h_H

#ifdef __cplusplus
extern "C"
{
#endif

    /* Includes ------------------------------------------------------------------*/
    #include "stm32f4xx_hal.h"

    #include <string.h>
    #include <stdint.h>
    #include <math.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <stdio.h> /* printf */

    // #include <unistd.h>
    // #include "arm_math.h"

    #include "generic_type_defs.h"
    #include "z_displ_ILI9XXX.h"
    #include "z_touch_XPT2046.h"
    #include "LM75.h"
    #include "ds1307.h"
    #include "BMP280.h"

    /* External function prototypes -----------------------------------------------*/

    /* Exported types ------------------------------------------------------------*/
    /**
     * @brief  HAL Status structures definition
     */
    typedef enum
    {
        LL_OK = 0x00U,
        LL_ERROR = 0x01U,
        LL_BUSY = 0x02U,
        LL_TIMEOUT = 0x03U,
        LL_FLAG_ADDR = 0x04U,
        LL_FLAG_AF = 0x05U
    } LL_StatusTypeDef;

    typedef struct
    {
      u16 in0;
      u16 in1;
    } ADC1_Data;
    /* Exported constants --------------------------------------------------------*/

    /* Exported macro ------------------------------------------------------------*/
    /* Exported functions ------------------------------------------------------- */

#ifdef __cplusplus
}
#endif
#endif /*__extern_variables_functions_for_h_H */

/**
 * @}
 */

/**
 * @}
 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
