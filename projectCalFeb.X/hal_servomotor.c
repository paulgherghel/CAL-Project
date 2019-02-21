/* DEFINES */
#define OFFSET_ANGLE 10
#define OFFSET_DUTY 4 
#define RESOLUTION (T_F16)0.04375

/* INCLUDES */
#include "mcal_gpio.h"
#include "mcal_pwm.h"
#include "hal_servomotor.h"
#include "general.h"
#include "general_types.h"


void vServoInit(void)
{
	//PWM1_vInit();
}

void vSetAngle(T_U8 u8Angle)
{	
	T_F16 duty;
	if(u8Angle > 120){
		u8Angle = 120;
	}else if(u8Angle < 60){
		u8Angle = 60;
	}
	duty = OFFSET_DUTY + RESOLUTION*(u8Angle-OFFSET_ANGLE);
	PWM1_vSetDuty(duty, 1);
}
//10 grade  - duty cycle = 4
//rezolutie = 7/160 = 0.04375