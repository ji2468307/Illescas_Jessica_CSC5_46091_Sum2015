/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: June 26, 2015, 1:53 PM
 * Purpose: Sales Tax
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
    float TotalPur = 52.0f;   // Total Purchased on item with State and County 
                              // Sales Tax
    float StTax = 0.04f;      // State Sales Tax
    float CoTax = 0.02f;      // County Sales Tax

    // Calculate Total Sales Tax
    float TotalST = TotalPur * (StTax+CoTax); // Total Sales Tax

    // Output the Results
    cout << "The total sales tax on a $" <<TotalPur<< " purchase is $" 
         <<TotalST<< ".\n";
 
    // Exit Stage Right
    return 0;
}

