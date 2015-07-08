/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: July 7, 2015, 6:55 PM
 * Purpose: How Much Insurance?
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
    // Declare and Initialize Variables 
    float costR;     // Replacement cost of a building in $'s
    float per = 0.8; // Percent of amount it would cost to replace structure
    float minAmt;    // Minimun amount of insurance he/she should buy
                     // for property in $'s

    cout << "Please enter the replacement cost of a building: $";
    cin >> costR;

    // Calculate the minimum amount of insurance
    minAmt = costR * per;

    cout << "The minimum amount of insurance"
         << " you should buy is: $" <<minAmt<< endl;

    // Exit Stage Right
    return 0;
}

