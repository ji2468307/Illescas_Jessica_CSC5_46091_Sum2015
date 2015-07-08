/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: July 7, 2015, 9:34 PM
 * Purpose: Minimum/Maximum
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
    float num1; // First number
    float num2; // Second number

    cout << "Please enter two numbers" << endl; 
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Determine which number is smaller and largest
    if (num1 > num2)
    {
        cout <<num1<< " is the largest number" << endl;
        cout <<num2<< " is the smallest number" << endl;
    }

    if (num1 < num2)
    {
        cout <<num2<< " is the largest number" << endl;
        cout <<num1<< " is the smallest number" << endl;
    }

    else if (num1 == num2)
    {
        cout <<num1<< " is equal to " << num2<< endl;
        cout << "So there is no small or large number"<< endl;
    }

    // Exit Stage Right
    return 0;
}

