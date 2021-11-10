#include "variant.h"

#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] = {
  // D0 - D7
  0,  // XL1
  1,  // XL2
  2,  // A0 / BAT ADC
  3,  // A1 / CHG_EN#
  4,  // A2
  5,  // UNUSED
  6,  // UNUSED
  7,  // HALL INT

  // D8 - D13
  8,  // UNUSED
  9,  // UNUSED
  10, // UNUSED

  11, // GPIO11

  12, // PWM0
  13, // PWM1

  14, // GPIO #14
  15, // GPIO #15
  16, // GPIO #16
  17, // GPIO #17
  18, // GPIO #18

  19, // TXD
  20, // RXD

  21, // UNUSED

  22, // GPIO #22
  23, // GPIO #23
  24, // GPIO #24

  25, // UNUSED

  26, // LIGHT INT
  27, // SCL1 (LIGHT)
  28, // SDA1 (LIGHT)

  29, // ACC INT
  30, // SDA2 (ACC)
  31, // SCL2 (ACC)
};

void initVariant()
{
  // LED1 & LED2
  pinMode(PIN_LED1, OUTPUT);
  ledOff(PIN_LED1);

  pinMode(PIN_LED2, OUTPUT);
  ledOff(PIN_LED2);
}

