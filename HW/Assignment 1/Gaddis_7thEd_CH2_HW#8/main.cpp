/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: June 26, 2015, 3:30 PM
 * Purpose: Total Purchase
 */

// System Libraries
#include <cstdlib>
#include <iostream>  // I/O Library
#include <iomanip>   // Set decimal points
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
    // Items prices
    float item1 = 12.95f;
    float item2 = 24.95f;
    float item3 = 6.95f;
    float item4 = 14.95f;
    float item5 = 3.95f;
    float salestax = 0.06f;         

    // Calculate Subtotal, Amount of Sales Tax, and Total Amount 
    float subtotal = item1 + item2 + item3 + item4 + item5; // Subtotal of all
                                                            // items prices
    float amtsaltax = subtotal * salestax; // Amount of sales tax
    float total = subtotal + amtsaltax;    // Total with sales tax

    // Output the Results
    cout << fixed << setprecision(2) << endl; // Fix precision to # of places
    cout << "Price of item 1 = $" <<item1<< endl;
    cout << "Price of item 2 = $" <<item2<< endl;
    cout << "Price of item 3 = $" <<item3<< endl;
    cout << "Price of item 4 = $" <<item4<< endl;
    cout << "Price of item 5 = $" <<item5<< endl;
    cout << "The subtotal of the sale is $" <<subtotal<< "." <<endl;
    cout << "The amount of sales tax is $" <<amtsaltax<< endl;
    cout << "The total amount of items purchased plus sales tax is $"
         <<total<< endl;

    // Exit Stage Right
    return 0;
}

