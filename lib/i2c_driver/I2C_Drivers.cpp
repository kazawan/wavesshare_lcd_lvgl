#include "I2C_Drivers.h"

TwoWire I2C = TwoWire(1);                         

void I2C_Init(void) {
  I2C.begin( I2C_SDA_PIN, I2C_SCL_PIN);                       
}
