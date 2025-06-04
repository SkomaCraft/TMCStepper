/**
 * TMCStepper library by @teemuatlut
 * SERIAL_SWITCH.cpp - Serial Switch for Arduino / Raspberry Pi
 */
#include "SERIAL_SWITCH.h"

SSwitch::SSwitch( const uint16_t pin1, const uint16_t pin2, const uint16_t pin3, const uint16_t pin4, const uint8_t address) :
  p1(pin1),
  p2(pin2),
  p3(pin3),
  p4(pin4),
  addr(address)
	{
		pinMode(pin1, OUTPUT);
		pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
    pinMode(pin4, OUTPUT);
	}

void SSwitch::active() {
	digitalWrite(p1, addr & 0b0001 ? HIGH : LOW);
	digitalWrite(p2, addr & 0b0010 ? HIGH : LOW);
  digitalWrite(p3, addr & 0b0100 ? HIGH : LOW);
  digitalWrite(p4, addr & 0b1000 ? HIGH : LOW);
}
