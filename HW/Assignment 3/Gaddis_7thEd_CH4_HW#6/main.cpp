/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: July 8, 2015, 12:46 AM
 * Purpose: Mass and Weight
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
    float mass;   // Mass in kilograms
    float weight; // Weight in newtons
    
    cout << "Please enter the object's mass (in kilograms): ";
    cin >> mass;

    // Calculate weight of an object
    weight = mass * 9.8;

    cout << "Weight of the object (in newtons): " <<weight<< endl;

    // Determine whether the object is heavy or light
    if (weight >= 1000) 
    {
        cout << "Object is too heavy" << endl;
    }

    if (weight <= 10)
    {
        cout << "Object is too light" << endl;
    }

    else if (weight<1000 && weight>10)
    {
        cout <<"Object is not too heavy or too light" << endl;
    }
    
    // Exit Stage Right
    return 0;
}

