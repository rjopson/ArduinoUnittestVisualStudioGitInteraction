/*
 Name:		embedded.ino
 Created:	10/16/2018 8:11:37 PM
 Author:	Jim
*/

#include "src/addCppClass.h"
#include "src/mathTest.h"

mathTest calc;
addCppClass testClass;

// the setup function runs once when you press reset or power the board
void setup() {

	int testAdd = calc.add(5, 6);
}

// the loop function runs over and over again until power down or reset
void loop() {

	int testMult = calc.multiply(5, 6);  
}
