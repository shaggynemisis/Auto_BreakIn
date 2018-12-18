#ifndef __Utilities_H__
#define __Utilities_H__

#include "Std_Types.h"

#define DEBUG_LEVEL0  0
#define DEBUG_LEVEL1  1
#define DEBUG_LEVEL2  2	
#define BUZZER		  (1<<13)


/*------------------ UART Function declarations-----------------*/
void System_Init(void);
void uart_init(void);
void uart_tx(uint8 *);
void tx1(uint8 );
char rx(void);
/*------------------ Utility Function declarations-----------------*/
void Pin_Config(void);
/*------------------Flasher function declarations------------------*/
void Led_Flash_Driver(void);
#endif
