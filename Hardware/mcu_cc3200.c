#include "mcu_cc3200.h"

#include "hw_memmap.h"
#include "hw_ints.h"

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
