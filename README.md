# Binary To Hex calculator
This project uses a 7 segment display, and 4 button inputs to convert the button inputs to a number matching the value.


## How to use
Buttons: Connect button 1 to pin 2, Button 2 to pin 3, Button 3 to pin 4 and button 4 to pin 5.

Display: Connect a to pin 12, b to 10, c to 7, d to 8, e to 9, f to 11, g to 13 and h to 6

All of these values can be changed in this bit of code found at top of the script:


`//Trykkknappene
const int knapp1 = 2;
const int knapp2 = 3;
const int knapp3 = 4;
const int knapp4 = 5;

//Stavene i displayet
const int a = 12;
const int b = 10;
const int c = 7;
const int d = 8;
const int e = 9;
const int f = 11;
const int g = 13;
const int h = 6;`

##Wiring
Wiring is easy enough to figure out. If needed you can send me a request for help
