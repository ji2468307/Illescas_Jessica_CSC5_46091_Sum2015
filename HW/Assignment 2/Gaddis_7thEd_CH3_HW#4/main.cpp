/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: July 6, 2015, 2:01 AM
 * Purpose: Average Rainfall
 */

// System Libraries
#include <cstdlib>
#include <iostream>  // I/O Library
using namespace std; // Namespace For iostream 

/*
 *User Libraries
 *Global Constants
 *Function Prototypes
 */

// Execution Begins Here
int main(int argc, char** argv) {

    // Code Goes Here
    // Declare Variables
    string month1; // Name of month 1
    string month2; // Name of month 2
    string month3; // Name of month 3
    float rain1; // Amount of rain in inches that fell  in month 1
    float rain2; // Amount of rain in inches that fell  in month 2
    float rain3; // Amount of rain in inches that fell  in month 3
    float avg; // Average rainfall for three months

    cout << "Please enter the name of the month of the first month: ";
    cin >> month1;
    cout << "Enter the amount of rain (in inches) that fell in that month as well: ";
    cin >> rain1;
    cout << "Please enter the name of the month of the second month: ";
    cin >> month2;
    cout << "Enter the amount of rain (in inches) that fell in that month as well: ";
    cin >> rain2;
    cout << "Please enter the name of the month of the third month: ";
    cin >> month3;
    cout << "Enter the amount of rain (in inches) that fell in that month as well: ";
    cin >> rain3;
  
    // Calculate the average rainfall 
    avg = (rain1 + rain2 + rain3) / 3;

    cout << "The average rainfall for " <<month1<< ", " <<month2<< ", and "
         <<month3<< " is " <<avg<< " inches." << endl;
    
    // Exit Stage Right
    return 0;
}

