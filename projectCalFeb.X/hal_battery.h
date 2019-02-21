/* 
 * File:   hal_battery.h
 * Author: admin
 *
 * Created on February 21, 2019, 4:58 PM
 */

#ifndef HAL_BATTERY_H
#define	HAL_BATTERY_H

#ifdef	__cplusplus
extern "C" {
#endif


#include "mcal_adc.h"
#define VREF (3.07)
    
T_F16 getBatteryProcent();

#ifdef	__cplusplus
}
#endif

#endif	/* HAL_BATTERY_H */

