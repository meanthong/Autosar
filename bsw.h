#ifndef __BSW_H
#define __BSW_H
#include "main.h"

#if MCU==STMF4 

	#include "stm32f4xx_hal.h"
	
	#define BLINK_ON() HAL_GPIO_WritePin(LED_GPIO_Port,LED_Pin,1)
	#define BLINK_OFF() HAL_GPIO_WritePin(LED_GPIO_Port,LED_Pin,0)
	#define Delay_MS(uint32_t) HAL_Delay(uint32_t) //Delay mili s 
	
#elif MCU==ATMega

	#define BLINK_ON() digitalWrite(13, HIGH)
	#define BLINK_OFF() digitalWrite(13, LOW)
	#define Delay_MS(uint32_t) milis(uint32_t)
	
#endif
	void bsw_init();
#endif
