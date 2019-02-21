/* 
 * File:   hal_motor.h
 * Author: Lupascu Diana
 *
 */

#ifndef HAL_MOTOR_H
#define	HAL_MOTOR_H

#include "general_types.h"

#define INAINTE 0
#define INAPOI 1

/* Init Motor */
void vMotorInit(void);
void vSetMotorDir(T_U8 u8Dir);
void vSetMotorSpeed(T_U8 u8Speed);

#endif	/* HAL_MOTOR_H */
