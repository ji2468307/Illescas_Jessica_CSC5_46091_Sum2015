/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: July 5, 2015, 10:11 PM
 * Purpose: Miles Per Gallon
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
    int gal; // Number of gallons of gas
    int mil; // Number of miles
    int mpg; // Number of miles that a car can be driven per gallon of gas

    cout << "Enter the number of gallons"
         << " of gas the car can hold: "; 
    cin >> gal;
    cout << "Enter the number of miles the car can be driven on "<< endl;
    cout << "a full tank: ";
    cin >> mil;

    // Calculate a car's gas mileage
    mpg = gal * mil; 

    cout << "The number of miles that may be driven per gallon of gas: "
         <<mpg<< endl;
    
    // Exit Stage Right
    return 0;
}

