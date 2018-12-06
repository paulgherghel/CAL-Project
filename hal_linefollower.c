#include "mcal_gpio.h"
#include "general.h"
#include "mcal_timers.h"
#include "sys_schedule.h"
#include "sys_tasks.h"
#include "general_types.h"
#include "mcal_init.h"

T_U8 i;
void LF_vSetPinsDir(BOOL bDir){
	for(i=0;i<6;++i)
		GPIO_u8SetPortPin(PORT_C,i,DIGITAL,bDir);
}

void LF_vWritePins(void){
	for(i=0;i<6;++i)
		GPIO_u8WritePortPin(PORT_C,i,1);
}

T_U8 LF_u8ReadPins(void){
	LF_vSetPinsDir(OUTPUT);
	LF_vWritePins();
	__delay_us(10);
	LF_vSetPinsDir(INPUT);
	__delay_us(250);
	return ((GPIO_u16ReadPort(PORT_C))&0x3F);
	
}
