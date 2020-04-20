#ifndef MCU_CC3200_HELPER_H_
#define MCU_CC3200_HELPER_H_

#define MAP_SysCtlClockGet 80000000
#define MILLISECONDS_TO_TICKS(ms) ((MAP_SysCtlClockGet / 1000) * (ms))
#define MICROSECONDS_TO_TICKS(us) ((MAP_SysCtlClockGet / 1000000) * (us))

#define BIT(n) (1 << n)
#define BIT0 BIT(0)
#define BIT1 BIT(1)
#define BIT2 BIT(2)
#define BIT3 BIT(3)
#define BIT4 BIT(4)
#define BIT5 BIT(5)
#define BIT6 BIT(6)
#define BIT7 BIT(7)

#endif
