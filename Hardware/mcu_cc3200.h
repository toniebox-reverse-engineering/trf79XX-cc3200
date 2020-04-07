#ifndef MCU_CC3200_H_
#define MCU_CC3200_H_

void IRQ_ON(void);
void IRQ_CLR(void);
void IRQ_ATTACH(void (*pfnIntHandler)(void));


#endif
