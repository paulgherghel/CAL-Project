#include "general.h"
#include "mcal_timers.h"
#include "sys_schedule.h"
#include "hal_linefollower.h"
#include "hal_motor.h"
#include "hal_servomotor.h"
#include "hal_battery.h"
#pragma config ICS = PGD2               // Comm Channel Select (Communicate on PGC2/EMUC2 and PGD2/EMUD2)
#pragma config JTAGEN = ON              // JTAG Port Enable (JTAG is Enabled)


int main()
{
    TASK_Inits();
    TASK_vSchedule();
    return 0;
}