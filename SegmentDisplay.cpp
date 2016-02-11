/*
 Library written for use with Common-Anode 7-Segment Display. For more information on how to use this library,
 please refer to the github README.

 Written by: Derek Duncan
 Data: 2/4/2016
*/

#include "Arduino.h"
#include "SegmentDisplay.h"

SegmentDisplay::SegmentDisplay(int pin1, int pin2, int pin4, int pin5, int pin6, int pin7, int pin9, int pin10)
{
    pinMode(pin1, OUTPUT);
    pinMode(pin2, OUTPUT);
    pinMode(pin4, OUTPUT);
    pinMode(pin5, OUTPUT);
    pinMode(pin6, OUTPUT);
    pinMode(pin7, OUTPUT);
    pinMode(pin9, OUTPUT);
    pinMode(pin10, OUTPUT);
    
	/*Make sure all of the LEDs are turned off for common anode*/
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin4, HIGH);
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, HIGH);
    digitalWrite(pin7, HIGH);
    digitalWrite(pin9, HIGH);
    digitalWrite(pin10, HIGH);
    /***********************************************************/
  
    _pin1 = pin1;
    _pin2 = pin2;
    _pin4 = pin4;
    _pin5 = pin5;
    _pin6 = pin6;
    _pin7 = pin7;
    _pin9 = pin9;
    _pin10 = pin10;
  
}

void SegmentDisplay::displayHex(int number)
{
    if(number == 0)
    {
      digitalWrite(_pin1, LOW);
      digitalWrite(_pin2, LOW);
      digitalWrite(_pin4, LOW);
      digitalWrite(_pin5, HIGH);
      digitalWrite(_pin6, LOW);
      digitalWrite(_pin7, LOW);
      digitalWrite(_pin9, LOW);
      digitalWrite(_pin10, HIGH);
    }
	
    if(number == 1)
    {
      digitalWrite(_pin1, HIGH);
      digitalWrite(_pin2, HIGH);
      digitalWrite(_pin4, LOW);
      digitalWrite(_pin5, HIGH);
      digitalWrite(_pin6, LOW);
      digitalWrite(_pin7, HIGH);
      digitalWrite(_pin9, HIGH);
      digitalWrite(_pin10, HIGH);
    }
  
    if(number == 2)
    {
      digitalWrite(_pin1, LOW);
      digitalWrite(_pin2, LOW);
      digitalWrite(_pin4, HIGH);
      digitalWrite(_pin5, HIGH);
      digitalWrite(_pin6, LOW);
      digitalWrite(_pin7, LOW);
      digitalWrite(_pin9, HIGH);
      digitalWrite(_pin10, LOW);
    }
  
    if(number == 3)
    {
      digitalWrite(_pin1, HIGH);
      digitalWrite(_pin2, LOW);
      digitalWrite(_pin4, LOW);
      digitalWrite(_pin5, HIGH);
      digitalWrite(_pin6, LOW);
      digitalWrite(_pin7, LOW);
      digitalWrite(_pin9, HIGH);
      digitalWrite(_pin10, LOW);
    }
  
    if(number == 4)
    {
      digitalWrite(_pin1, HIGH);
      digitalWrite(_pin2, HIGH);
      digitalWrite(_pin4, LOW);
      digitalWrite(_pin5, HIGH);
      digitalWrite(_pin6, LOW);
      digitalWrite(_pin7, HIGH);
      digitalWrite(_pin9, LOW);
      digitalWrite(_pin10, LOW);
    }
  
    if(number == 5)
    {
      digitalWrite(_pin1, HIGH);
      digitalWrite(_pin2, LOW);
      digitalWrite(_pin4, LOW);
      digitalWrite(_pin5, HIGH);
      digitalWrite(_pin6, HIGH);
      digitalWrite(_pin7, LOW);
      digitalWrite(_pin9, LOW);
      digitalWrite(_pin10, LOW);
    }
  
    if(number == 6)
    {
      digitalWrite(_pin1, LOW);
      digitalWrite(_pin2, LOW);
      digitalWrite(_pin4, LOW);
      digitalWrite(_pin5, HIGH);
      digitalWrite(_pin6, HIGH);
      digitalWrite(_pin7, HIGH);
      digitalWrite(_pin9, LOW);
      digitalWrite(_pin10, LOW);
    }
  
    if(number == 7)
    {
      digitalWrite(_pin1, HIGH);
      digitalWrite(_pin2, HIGH);
      digitalWrite(_pin4, LOW);
      digitalWrite(_pin5, HIGH);
      digitalWrite(_pin6, LOW);
      digitalWrite(_pin7, LOW);
      digitalWrite(_pin9, HIGH);
      digitalWrite(_pin10, HIGH);
    }
  
    if(number == 8)
    {
      digitalWrite(_pin1, LOW);
      digitalWrite(_pin2, LOW);
      digitalWrite(_pin4, LOW);
      digitalWrite(_pin5, HIGH);
      digitalWrite(_pin6, LOW);
      digitalWrite(_pin7, LOW);
      digitalWrite(_pin9, LOW);
      digitalWrite(_pin10, LOW);
    }
  
    if(number == 9)
    {
      digitalWrite(_pin1, HIGH);
      digitalWrite(_pin2, HIGH);
      digitalWrite(_pin4, LOW);
      digitalWrite(_pin5, HIGH);
      digitalWrite(_pin6, LOW);
      digitalWrite(_pin7, LOW);
      digitalWrite(_pin9, LOW);
      digitalWrite(_pin10, LOW);
    }
	
    if(number == 10)
    {
      digitalWrite(_pin1, LOW);
      digitalWrite(_pin2, HIGH);
      digitalWrite(_pin4, LOW);
      digitalWrite(_pin5, HIGH);
      digitalWrite(_pin6, LOW);
      digitalWrite(_pin7, LOW);
      digitalWrite(_pin9, LOW);
      digitalWrite(_pin10, LOW);	
    }
	
    if(number == 11)
    {
        digitalWrite(_pin1, LOW);
        digitalWrite(_pin2, LOW);
        digitalWrite(_pin4, LOW);
        digitalWrite(_pin5, HIGH);
        digitalWrite(_pin6, HIGH);
        digitalWrite(_pin7, HIGH);
        digitalWrite(_pin9, LOW);
        digitalWrite(_pin10, LOW);	
	}
	
	if(number == 12)
	{
        digitalWrite(_pin1, LOW);
        digitalWrite(_pin2, LOW);
        digitalWrite(_pin4, HIGH);
        digitalWrite(_pin5, HIGH);
        digitalWrite(_pin6, HIGH);
        digitalWrite(_pin7, LOW);
        digitalWrite(_pin9, LOW);
        digitalWrite(_pin10, HIGH);	
	}
	
	if(number == 13)
	{
        digitalWrite(_pin1, LOW);
        digitalWrite(_pin2, LOW);
        digitalWrite(_pin4, LOW);
        digitalWrite(_pin5, HIGH);
        digitalWrite(_pin6, LOW);
        digitalWrite(_pin7, HIGH);
        digitalWrite(_pin9, HIGH);
        digitalWrite(_pin10, LOW);	
	}
	
	if(number == 14)
	{
        digitalWrite(_pin1, LOW);
        digitalWrite(_pin2, LOW);
        digitalWrite(_pin4, HIGH);
        digitalWrite(_pin5, HIGH);
        digitalWrite(_pin6, HIGH);
        digitalWrite(_pin7, LOW);
        digitalWrite(_pin9, LOW);
        digitalWrite(_pin10, LOW);	
	}
	
	if(number == 15)
	{
        digitalWrite(_pin1, LOW);
        digitalWrite(_pin2, HIGH);
        digitalWrite(_pin4, HIGH);
        digitalWrite(_pin5, HIGH);
        digitalWrite(_pin6, HIGH);
        digitalWrite(_pin7, LOW);
        digitalWrite(_pin9, LOW);
        digitalWrite(_pin10, LOW);	
		
	}
}

void SegmentDisplay::testDisplay()
{
	for(int i = 0; i <= 15; i++)
	{
		displayHex(i);
		delay(500);
	}
}


