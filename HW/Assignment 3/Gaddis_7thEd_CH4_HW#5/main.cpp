/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: July 8, 2015, 12:13 AM
 * Purpose: Body Max Index
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
    float weight; // Weight in pounds
    float height; // Height in inches
    float BMI;    // Person's Body Mass Index 

    cout << "Please enter your weight (in pounds): ";
    cin >> weight;
    cout << "Please enter your height (in inches): ";
    cin >> height;

    // Calculate body mass index
    BMI = (weight * 703) / (height * height);

    cout << "Your Body Mass Index (BMI): " <<BMI<< endl;

    // Determine whether person has 
    // optimal weight, is underweight, or is overweight
    if (BMI >= 18.5 && BMI <= 25)
    {
        cout << "Your BMI indicates that you have an optimal weight" << endl;
    }

    if (BMI < 18.5)
    {
        cout << "Your BMI indicates you are underweight" << endl;
    }

    if (BMI > 25)
    {
        cout << "Your BMI indicates you are overweight" << endl;
    }

    // Exit Stage Right
    return 0;
}

