#pragma once
#include <Wire.h> 

#define I2C_SCL_PIN       10
#define I2C_SDA_PIN       11

extern TwoWire I2C;

void I2C_Init(void);