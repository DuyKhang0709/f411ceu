/**
 ******************************************************************************
 * @file extern_variables_functions.h
 * @author Nguyen_Sang - FPT Company
 * @version V1.0
 * @date 05-09-2017
 ******************************************************************************
 * @source
 *
 ******************************************************************************
 */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __EXTERN_VARIABLES_FUNCTIONS_H
#define __EXTERN_VARIABLES_FUNCTIONS_H

#ifdef __cplusplus
extern "C"
{
#endif

    /* Includes ------------------------------------------------------------------*/
    #include "stm32f4xx_hal.h"

    #include <string.h>
    #include <stdint.h>
    #include <math.h>/* signbit, sqrt */
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
    /* Extern types ------------------------------------------------------------*/
    /* Extern constants --------------------------------------------------------*/
    /* Extern macro ------------------------------------------------------------*/
    /* Extern variables ---------------------------------------------------------*/
    extern ADC1_Data average_adc1;
    extern ADC1_Data adc1;
    extern v_u32 adc_complete;
    extern v_u32 Counter_0, Counter_1;
    /* Extern function prototypes -----------------------------------------------*/

#ifdef __cplusplus
}
#endif
#endif /*__EXTERN_VARIABLES_FUNCTIONS_H */

/**
 * @}
 */

/**
 * @}
 */

/*****************************END OF FILE****/
