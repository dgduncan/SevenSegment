/*
 Library written for use with Common-Anode 7-Segment Display. For more information on how to use this library,
 please refer to the github README.

 Written by: Derek Duncan
 Data: 2/4/2016
*/

#include "Arduino.h"
#include "SegmentDisplay.h"

SegmentDisplay::SegmentDisplay(int pin1, int pin2, int pin4, int pin5, int pin6, int pin7, int pin9, int pin10) {
    
    pins[0] = pin1;
    pins[1] = pin2;
    pins[2] = pin4;
    pins[3] = pin5;
    pins[4] = pin6;
    pins[5] = pin7;
    pins[6] = pin9;
    pins[7] = pin10;

    
    for(int i = 0; i < 8; i++) {
        pinMode(pins[i], OUTPUT);
        digitalWrite(pins[i], HIGH);
    }
}

void SegmentDisplay::displayHex(int number, boolean decimalPointFlag) {
    
    byte numbersToDisplay[] = {
        B10001000,  //  0
        B11101011,  //  1
        B01001100,  //  2
        B01001001,  //  3
        B00101011,  //  4
        B00011001,  //  5
        B00011000,  //  6
        B11001011,  //  7
        B00001000,  //  8
        B00001011,  //  9
        B00001010,  //  A
        B00111000,  //  B
        B10011100,  //  C
        B01101000,  //  D
        B00011100,  //  E
        B00011110,  //  F
        B01011101  //  Error
        
    };
    
    
    boolean bitToWrite;
    
    for(int segment = 0; segment < 8; segment++) {
        if(number < 0 || number > 15) {
            bitToWrite = bitRead(numbersToDisplay[16], segment);
        }
        
        else if(segment == 3 && decimalPointFlag) {
            bitToWrite = 0;
        }
        
        else {
            bitToWrite = bitRead(numbersToDisplay[number], segment);
        }
        
        digitalWrite(pins[segment], bitToWrite);
        
    }
}

void SegmentDisplay::displayDecimalPoint() {
    for(int i = 0; i < 8; i++) {
        if(i == 3) {
            digitalWrite(pins[i], 0);
        }
        else {
            digitalWrite(pins[i], 1);
        }
    }
}

void SegmentDisplay::testDisplay() {
	for(int i = 0; i <= 15; i++) {
		displayHex(i, false);
		delay(500);
	}
}
