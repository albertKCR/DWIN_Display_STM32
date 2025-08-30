#ifndef SMU_H
#define SMU_H

#include "stm32f4xx_hal.h"
#include <stdint.h>
#include "usb_device.h"
#include <string.h>

extern UART_HandleTypeDef huart1;

void readVP(uint16_t vp, uint8_t numBytes);
void setDisplayPage(uint8_t pageId);
void void readDisplayFloat(float *myFloat);
char* getVP();

#endif
