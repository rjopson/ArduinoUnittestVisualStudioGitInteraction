/*
 * This is a test cpp class for a calculator to understand how git, 
 * Arduino and unit testing go together in Visual Studio Code 
*/

#include "mathTest.h"

mathTest::mathTest() {

}

int mathTest::add(int a, int b) {
    return a + b; 
}

int mathTest::subtract(int a, int b) {
    return a - b;
}

int mathTest::multiply(int a, int b) {
    return a * b;
}

int mathTest::divide(int a, int b) {
    return a / b;
}