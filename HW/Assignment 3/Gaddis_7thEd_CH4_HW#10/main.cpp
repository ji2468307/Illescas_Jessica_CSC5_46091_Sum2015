/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: July 8, 2015, 12:46 PM
 * Purpose: Software Sales
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
    float pack = 99.00; // Package that retails for $99
    int unit;           // Units sold
    float totalC;       // Total Cost of purchase

    cout << "Please enter the number of units sold: ";
    cin >> unit; 

    // Calculate Total Cost of purchase
    totalC = unit * pack;

    // Determine quantity discounts
    if (unit>0 && unit<10) // Retail price no discount
    {
        cout << "Total cost: $" <<totalC<< endl; 
    }

    if (unit>=10 && unit<=19) // Discount of 20% (0.20)
    {   
        totalC = totalC - (totalC*0.20);
        cout << "Total cost: $" <<totalC<< endl;
    }

    if (unit>=20 && unit<=49) // Discount of 30% (0.30)
    {   
        totalC = totalC - (totalC*0.30);
        cout << "Total cost: $" <<totalC<< endl; 
    }

    if (unit>=50 && unit<=99) // Discount of 40% (0.40)
    {   
        totalC = totalC - (totalC*0.40);
        cout << "Total cost: $" <<totalC<< endl;
    }

    else if (unit >= 100) // Discount of 50% (0.50)
    {
        totalC= totalC - (totalC*0.50);
        cout << "Total cost: $" <<totalC<< endl;
    }
    
    // Exit Stage Right
    return 0;
}

