/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: June 27, 2015, 12:24 AM
 * Purpose: Stock Commission
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
    int share = 600;     // Number of shares of stock
    float stock = 21.77; // Stock at price per share
    float com = 0.02;    // Percent commission

    // Calculate Amount Paid for Stock w/o Commission, Amount of Commission, and 
    // Total Amount Paid with Commission
    float amtst = share * stock;  // Amount paid stock without commission
    float amtcom = amtst * com;   // Amount of commission
    float total = amtst + amtcom; // Total amount paid for stock plus 
                                  // commission

    // Output the Results                                    
    cout << "Amount paid for the stock without commission is $" <<amtst;
    cout << " per share" << "." << endl; 
    cout << "Amount of the commission is $" <<amtcom<< "." << endl;
    cout << "Total amount paid for the stock plus the commission is $";
    cout <<total<< "." << endl;        

    // Exit Stage Right
    return 0;
}

