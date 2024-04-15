//
// Created by 24106 on 2024/4/15.
//

#ifndef MPU6050_UART_H
#define MPU6050_UART_H


#include "usart.h"
#include "stdio.h"
#include "stdarg.h"
#include "string.h"

extern uint8_t bag[50];   //Ö¸¶¨¼¯ //data bag
extern uint8_t AngleOpen;
extern uint8_t SpeedOpen;

void print(UART_HandleTypeDef* huart, const char* buf, ...);
void number(const char* str,int *s);


#endif //MPU6050_UART_H
