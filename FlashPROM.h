#ifndef INC_FLASHPROM_H_
#define INC_FLASHPROM_H_

#include "stm32f4xx_hal.h"

//F103
//#define START_ADDR ((uint32_t)0x0801F800)
//#define END_ADDR   ((uint32_t)0x0801FBFF)

//F411
//#define START_ADDR ((uint32_t)0x08060000)
//#define END_ADDR   ((uint32_t)0x0807FFFF)

//F401
#define START_ADDR ((uint32_t)0x08020000)
#define END_ADDR   ((uint32_t)0x0803FFFF)

void FlashPROM_Init(uint16_t buffsize);
void FlashPROM_Write(void* buff);
void FlashPROM_Read(void* buff);

void EraseFlash();

#endif
