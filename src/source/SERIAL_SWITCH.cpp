/**
 * TMCStepper library by @teemuatlut
 * SERIAL_SWITCH.cpp - Serial Switch for Arduino / Raspberry Pi
 */
#include "SERIAL_SWITCH.h"

SSwitch::SSwitch( const int pin1, const int pin2, const int pin3, const int pin4, const uint8_t address) :
  p1(pin1),
  p2(pin2),
  p3(pin3),
  p4(pin4),
  addr(address)
	{
		pinMode(pin1, OUTPUT);
		pinMode(pin2, OUTPUT);
    if(pin3 >= 0)
    {
      pinMode(pin3, OUTPUT);
    }
    if(pin4 >= 0)
    {
      pinMode(pin4, OUTPUT);
    }
	}

void SSwitch::active() {
	digitalWrite(p1, addr & 0b0001 ? HIGH : LOW);
	digitalWrite(p2, addr & 0b0010 ? HIGH : LOW);
  if(p3>=0)digitalWrite(p3, addr & 0b0100 ? HIGH : LOW);
  if(p4>=0)digitalWrite(p4, addr & 0b1000 ? HIGH : LOW);
}
