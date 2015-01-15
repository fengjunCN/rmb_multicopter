#define SERIAL_PORT_SPEED 115200

#include "imu.h"
#include "debugger.h"
#include "flight_controller.h"

void setup() {
  Serial.begin(SERIAL_PORT_SPEED);
  imu_init();
  fc_init();
}

void loop() {
  while(!imu_read());
  debugger_print();
}
