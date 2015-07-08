/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: July 7, 2015, 10:19 PM
 * Purpose: Roman Numeral Converter
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
    int num; // Number 

    cout << "Enter a number from 1-10" << endl;
    cin >> num; 

    // Calculate the Roman numeral of a number
    if(num >= 1 && num <= 10)
    {
        switch(num)
        {
            case 1: cout << "I" << endl;
                    break;

            case 2: cout << "II" << endl;
                    break;

            case 3: cout << "III" << endl;
                    break;

            case 4: cout << "IV" << endl;
                    break;

            case 5: cout << "V" << endl;
                    break;

            case 6: cout << "V1" << endl;
                    break;

            case 7: cout << "VII" << endl;
                    break;

            case 8: cout << "VIII" << endl;
                    break;

            case 9: cout << "IX" << endl;
                    break;

            case 10: cout << "X" << endl;
                    break;
        }

    }

    else // Any number that is not between 1-10
    {
        cout << "That is not a number between 1-10" << endl;
        return 0;
    }

    // Exit Stage Right
    return 0;
}

