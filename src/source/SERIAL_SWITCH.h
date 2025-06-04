/**
 * TMCStepper library by @teemuatlut
 * SERIAL_SWITCH.h - Serial Switch for Arduino / Raspberry Pi
 */
#pragma once
#if defined(ARDUINO) && ARDUINO >= 100
	#include <Arduino.h>
#elif defined(bcm2835)
	#include "rpi_bcm2835.h"
	#include "bcm2835_spi.h"
	#include "bcm2835_stream.h"
#elif __cplusplus >= 201703L
	#if __has_include(<Arduino.h>)
		#include <Arduino.h>
	#endif
#endif

#include "TMC_platforms.h"

class SSwitch {
  public:
    SSwitch(const int pin1, const int pin2, const int pin3, const int pin4, const uint8_t address);
    void active();
  private:
    const int p1;
    const int p2;
    const int p3;
    const int p4;
    const uint8_t addr;
};
