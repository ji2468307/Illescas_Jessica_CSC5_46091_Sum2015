/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: July 6, 2015, 12:10 AM
 * Purpose: Stadium Seating
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
    float classA = 15.00; // Cost per ticket for Class A
    float classB = 12.00; // Cost per ticket for Class B
    float classC = 9.00;  // Cost per ticket for Class C
    int soldA; // Amount of tickets sold for Class A
    int soldB; // Amount of tickets sold for Class B
    int soldC; // Amount of tickets sold for Class C
    float totalA; // Total Amount $'s sold from ticket sales in Class A
    float totalB; // Total Amount $'s sold from ticket sales in Class B
    float totalC; // Total Amount $'s sold from ticket sales in Class C

    cout << fixed << setprecision(2); // Set to two decimal places
    cout << "Class A seats cost: $" <<classA<< endl;
    cout << "Class B seats cost: $" <<classB<< endl;
    cout << "Class C seats cost: $" <<classC<< endl;
    cout << "How many tickets were sold for Class A? ";
    cin >> soldA;
    cout << "How many tickets were sold for Class B? ";
    cin >> soldB;
    cout << "How many tickets were sold for Class C? ";
    cin >> soldC;

    // Calculate Amount of income from ticket sales
    totalA = classA * soldA;
    totalB = classB * soldB;
    totalC = classC * soldC;

    cout << "Class A generated: $" <<totalA<< endl;
    cout << "Class B generated: $" <<totalB<< endl;
    cout << "Class C generated: $" <<totalC<< endl;

    // Exit Stage Right
    return 0;
}

