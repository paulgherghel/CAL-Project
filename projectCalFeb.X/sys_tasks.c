/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"
#include "general_types.h"
#include "mcal_init.h"
#include "hal_servomotor.h"
#include "hal_motor.h"
#include "hal_battery.h"
#include "mcal_encoder.h"
#include "hal_linefollower.h"

//T_F16 batteryProcent;
T_F16 distance=0;

void TASK_Inits()
{
    
    MCAL_vInit();
    vMotorInit();
    vSetMotorDir(0); // inainte
    vSetAngle(90);
    vSetMotorSpeed(20);
}

void TASK_1ms()
{
    
  
}

void TASK_5ms()
{

}

void TASK_10ms()
{   

}

void TASK_100ms()
{ 
	switch(LF_u8ReadPins()){
        case 0x0C:
            vSetAngle(90);
            break;
        case 0x03:
            vSetAngle(110);
            break;
        case 0x30:
            vSetAngle(70);
            break;
        default:
            break;
    }
}

void TASK_500ms()
{ 	
	/*distance+=QEI_u16getElapsedCm();
    if(distance<=12)
            vSetMotorSpeed(20);
        else{
            vSetMotorSpeed(0);
            distance = 0;
        }*/
}

void TASK_1000ms()
{
    

}