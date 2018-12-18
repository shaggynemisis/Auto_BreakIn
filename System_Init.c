#include <lpc17xx.h>
#define N LPC_SC
	
void System_Init(void)
{
		N->SCS=(1<<5); 		              // ENABLING MAIN OSC
		while((N->SCS&(1<<6))!=(1<<6));	  // CHECKING MAIN OSC CONNECTION
		N->CLKSRCSEL=(1<<0);              // i/p for pll
		N->PLL0CON=(1<<0);	              // enable pll block
		N->PLL0CFG=(14<<0);	              // load mul & dev values
		N->PLL0FEED=0XAA;    
		N->PLL0FEED=0X55;
		while((N->PLL0STAT&(1<<26))!=(1<<26));	 // checking status of pllostat reg
		N->CCLKCFG=(5<<0);	              // load clk dev value
		N->PLL0CON|=(1<<1);	              //connect cclk to cpu
		N->PLL0FEED=0XAA;
		N->PLL0FEED=0X55;
 }
 