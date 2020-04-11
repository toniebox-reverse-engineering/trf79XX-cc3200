#include "mcu_cc3200.h"

#include "hw_memmap.h"
#include "hw_ints.h"
#include "timer.h"
#include "prcm.h"

void IRQ_ON(void) {
    //https://e2e.ti.com/support/wireless-connectivity/wifi/f/968/t/393613
    IRQ_CLR();
    MAP_IntEnable(INT_GPIOA3);
    MAP_GPIOIntEnable(GPIOA3_BASE, 1 << 4);
}

void IRQ_CLR(void) {
    MAP_GPIOIntClear(GPIOA3_BASE, 1 << 4);
    MAP_IntPendClear(INT_GPIOA3);
}

void IRQ_ATTACH(void (*pfnIntHandler)(void)) {
    MAP_GPIOIntRegister(GPIOA3_BASE, pfnIntHandler);
}

tBoolean IRQ_PIN_READ(void) {
    return (1 << 4 & MAP_GPIOPinRead(GPIOA3_BASE, 1 << 4));
}

void TMR_ON(void) {
    MAP_PRCMPeripheralClkEnable(PRCM_TIMERA0, PRCM_RUN_MODE_CLK);
    MAP_PRCMPeripheralReset(PRCM_TIMERA0);
    MAP_TimerEnable(TIMERA0_BASE, TIMER_A);
    MAP_TimerIntEnable(TIMERA0_BASE, TIMER_TIMA_TIMEOUT);
}
/*
void TMR_OFF(void) {
    MAP_TimerDisable(TIMERA0_BASE, TIMER_A);
    MAP_TimerIntDisable(TIMERA0_BASE, TIMER_TIMA_TIMEOUT);
    MAP_PRCMPeripheralClkDisable(PRCM_TIMERA0, PRCM_RUN_MODE_CLK);
}*/

void TMR_ATTACH(void (*pfnIntHandler)(void)) {
    MAP_TimerIntRegister(TIMERA0_BASE, TIMER_A, pfnIntHandler);
    TMR_ON();
}
void TMR_SET(unsigned long microseconds) {
    MAP_TimerConfigure(TIMERA0_BASE, TIMER_CFG_ONE_SHOT);
    MAP_TimerLoadSet(TIMERA0_BASE, TIMER_A, MICROSECONDS_TO_TICKS(microseconds));
}