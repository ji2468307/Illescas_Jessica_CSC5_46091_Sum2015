/* 
 * File:   main.cpp
 * Author: Kenton84
 * Created: July 8, 2015, 1:19 AM
 * Purpose: Time Calculator
 */

// System Libraries
#include <cstdlib>
#include <iostream>  // I/O Library
#include <iomanip>   // Set precision
using namespace std; // Namespace for iostream

/*
 *User Libraries
 *Global Constants
 *Function Prototypes
 */

// Execution Begins Here
int main(int argc, char** argv) {

    // Code Goes Here
    // Declare and Initialize Variables
    int sec; // Number of seconds
    float min = 60; // Number of seconds in a minute
    float hr = 3600;  // Number of seconds in an hour
    float day = 86400; // Number of seconds in a day

    cout << fixed << setprecision(2); // Set to one decimal point
    cout << "Please enter a number of seconds: ";
    cin >> sec;

    // Calculate seconds into minutes, or hours, or days
    
    if (sec>=60 && sec<3600)
    {
        // Declare and Initialize Variables
        float Nmin = sec / min;
        cout <<sec<< " seconds is " <<Nmin<< " minutes" << endl;
    }

    if (sec>=3600 && sec<86400)
    {
        // Declare and Initialize Variables
        float Nhr = sec / hr;
        cout <<sec<< " seconds is " <<Nhr<< " hours" << endl;
    }

    if (sec >= 86400)
    {
        // Declare and Initialize Variables
        float Nday = sec / day;
        cout <<sec<< " seconds is " <<Nday<< " days" << endl; 
    }

    // Exit Stage Right
    return 0;
}

