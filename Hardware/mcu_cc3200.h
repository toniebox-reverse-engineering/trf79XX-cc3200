#ifndef MCU_CC3200_H_
#define MCU_CC3200_H_

#include "hw_types.h"
#include "helper.h"

void IRQ_ON(void);
void IRQ_CLR(void);
void IRQ_ATTACH(void (*pfnIntHandler)(void));
tBoolean IRQ_PIN_READ(void);

void TMR_ON(void);
//void TMR_OFF(void);
void TMR_ATTACH(void (*pfnIntHandler)(void));
void TMR_SET(unsigned long microseconds);

void SPI_ENABLE(void);
void SPI_DISABLE(void);

#endif
