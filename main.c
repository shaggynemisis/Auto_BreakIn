#include<lpc17xx.h>
#include"timer.h"

main()
{

Timer_Init();
LPC_GPIO0->FIODIR|=(1<<4);
while(1)
{
LPC_GPIO0->FIOSET|=(1<<4);
Timer_Delay(10); 
LPC_GPIO0->FIOCLR|=(1<<4);
Timer_Delay(10);
}
}