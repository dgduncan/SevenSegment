# arduino_7_segment_display_library
This library was written originally to be used with 7-Segment-Display YSD-160AR4B-8

![Demo](https://thumbs.gfycat.com/BlankCraftyBordercollie-size_restricted.gif)

Installing this Library
=====

1. Download this library by clicking download zip at the top right of this repository or cloning the repository to your computer.

2. In the arduino IDE: Sketch -> Include Library -> Add .ZIP library : and go to where the zip file you downloaded is located. Done!

3. When you want to use this library, just include the library @ Sketch -> Include Library in the Arduino IDE and you are good to go!

How to use this library
=====

This is the correct pinout diagram of the YSD-160AR4B-8.

```
10, 9, CA, 7, 6
 ____________
|            |
|            |
|            |
|            |
|            |
|____________|
1, 2, CA, 4, 5
```
```C
/*
 *Initialize SevenSegment
 *Put the number of the digitalPin from the arduino connected to the 7-Segment in order
 *For example, I use digitalPin 2 connected to pin 1 on the 7-Segment, digitalPin 3 to pin2, 4 to 4
 *5 to 5, 6 to 6, 7 to 7, 8 to 9, and 9 to 10
 */
SegmentDisplay segmentDisplay(2, 3, 4, 5, 6, 7, 8, 9);
```

**How to display a hex letter with/without decimal point**
```C
/*Display any given hex number 0 to 15
 *2 with no decimal and C with decimal point in this example
 */
segmentDisplay.displayHex(2, false);
segmentDisplay.displayHex(12, true);
```

**Display only the decimal point**
```C
/*Display only the decimal point*/
segmentDisplay.displayDecimalPoint();
```

**How to test the display and test display wiring**
```C
/*Test the given display and display wiring by rotating through numbers 0 - F*/
segmentDisplay.testDisplay();
```

Example Wiring
=====

![Alt text](https://github.com/dgduncan/arduino_7_segment_display_library/blob/master/extras/fritzing_image.png "Example Wiring Diagram")


LICENSE
=====

```
The MIT License (MIT)

Copyright (c) 2016 Derek Duncan


Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
```

