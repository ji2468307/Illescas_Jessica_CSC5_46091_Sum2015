/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: June 26, 2015, 2:54 PM
 * Purpose: Average of Values
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

    // Your Code Goes Here 
    // Declare and Initialize Variables
    int a = 28;
    int b = 32;
    int c = 37;
    int d = 24;
    int e = 33;
    int n = 5;

    // Calculate the Average 
    float sum = a + b + c + d + e; // Sum of variables a, b, c, d, e
    float avg = sum / n;           // Average = sum divided by 5
    
    // Output the Results
    cout <<avg<< endl;

    // Exit Stage Right
    return 0;
}

