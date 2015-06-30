/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: June 26, 2015, 3:14 PM
 * Purpose: Annual Pay
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
    float payAmount = 1700.00f; // Amount of pay the employee earns each
                                // pay period
    int payPeriods = 26;        // Number of pay periods in a year

    // Calculate Total Annual Pay
    float annualPay = payAmount * payPeriods; // Employee's total annual pay

    // Output the Results 
    cout << "The employee's total annual pay is $" <<annualPay<< "."<< endl; 

    // Exit Stage Right
    return 0;
}

