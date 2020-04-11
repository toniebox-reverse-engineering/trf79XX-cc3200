#ifndef MCU_CC3200_H_
#define MCU_CC3200_H_

#include "hw_types.h"

#define MAP_SysCtlClockGet 80000000
#define MILLISECONDS_TO_TICKS(ms) ((MAP_SysCtlClockGet / 1000) * (ms))
#define MICROSECONDS_TO_TICKS(us) ((MAP_SysCtlClockGet / 1000000) * (us))

void IRQ_ON(void);
void IRQ_CLR(void);
void IRQ_ATTACH(void (*pfnIntHandler)(void));
tBoolean IRQ_PIN_READ(void);

void TMR_ON(void);
//void TMR_OFF(void);
void TMR_ATTACH(void (*pfnIntHandler)(void));
void TMR_SET(unsigned long microseconds);

#endif
