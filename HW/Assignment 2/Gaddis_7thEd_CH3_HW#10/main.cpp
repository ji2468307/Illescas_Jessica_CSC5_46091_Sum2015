/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: July 7, 2015, 8:56 PM
 * Purpose: Celsius to Farenheit
 */

// System Libraries
#include <cstdlib>
#include <iostream>  // I/O Library
using namespace std; // Namespace for iostream

/*
 *User Libraries
 *Global Constants
 *Function Prototypes
 */

// Execution Begins Here
int main(int argc, char** argv) {

    // Code Goes Here
    // Declare Variables
    int tempC; // Celsius temperature
    int tempF; // Fahrenheit temperature

    cout << "Celsius Temperature: ";
    cin >> tempC;

    // Calculate Celsius temperatures to Fahrenheit temperatures
    tempF = ((9.0/5.0) * tempC) + 32;

    cout << "Fahrenheit Temperature: " <<tempF<< endl;

    // Exit Stage Right
    return 0;
}

