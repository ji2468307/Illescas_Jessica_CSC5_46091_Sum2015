/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: July 7, 2015, 10:47 PM
 * Purpose: Magic Dates
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
    int month; 
    int day;
    int year;

    cout << "Please enter a month (in numeric form): ";
    cin >> month;
    cout << "Please enter a day (1-31): ";
    cin >> day;
    cout << "Please enter a two digit year: ";
    cin >> year;

    // Determine whether a date is magic
    if((month*day)==year)
    {
        cout << "The date is magic." << endl;
    }

    else if((month*day)!=year)
    {
        cout << "The date is not magic." << endl;
    }

    // Exit Stage Right
    return 0;
}

