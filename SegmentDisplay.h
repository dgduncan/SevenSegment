/*
Derek Duncan
*/

#ifndef SegmentDisplay_H
#define SegmentDisplay_H

#include "Arduino.h"

class SegmentDisplay
{
    public:
      SegmentDisplay(int pin1, int pin2, int pin4, int pin5, int pin6, int pin7, int pin9, int pin10);
      void displayNumber(int numberToDisplay);
      void testDisplay();

    private:
      int _pin1;
      int _pin2;
      int _pin4;
      int _pin5;
      int _pin6;
      int _pin7;
      int _pin9;
      int _pin10;
    
};

#endif
