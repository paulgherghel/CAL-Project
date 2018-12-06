#include "mcal_gpio.h"
#include "general.h"
#include "mcal_timers.h"
#include "sys_schedule.h"
#include "sys_tasks.h"
#include "general_types.h"
#include "mcal_init.h"

void LF_vSetPinsDir(BOOL bDir);
void LF_vWritePins(void);
T_U8 LF_u8ReadPins(void);