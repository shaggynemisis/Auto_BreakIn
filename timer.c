 #include <LPC17xx.H>
 #include "timer.h"
 #include "Std_Types.h" 
 
 void Timer_Init(void)
 {
 LPC_SC->PCONP |=(1<<1);                //TIMER0 Selection
 LPC_TIM0->CTCR = 0x0;
 LPC_SC->PCLKSEL0 &=~(0x3<<2);
 LPC_TIM0->PR = MILLISEC; 
 }

 void Timer_Delay(uint32 delay)
  {
        
			
        LPC_TIM0->TCR = 0x01;            //Enable timer
	    while(LPC_TIM0->TC<delay);
        LPC_TIM0->TCR = 0x02;        //Reset Timer0 
		
  }	 
  
    

