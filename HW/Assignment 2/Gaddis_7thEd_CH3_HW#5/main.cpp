/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: July 6, 2015, 2:38 AM
 * Purpose: Box Office
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
    string movie;        // Name of the movie
    int soldA;           // Amount of adult tickets sold 
    int soldC;           // Amount of child tickets sold
    float priceA = 6.00; // Price for a adult ticket 
    float priceC = 3.00; // Price for a child tiket
    float total;         // Gross Box Office Profit
    float percent = 0.2; // 20 % the theater keeps 
    float AmtKept;        // Net Box Office Profit
    float AmtPaid;       // Amount Paid to Distributor

    cout << fixed << setprecision(2); // Set to one decimal point
    cout << "Movie Name:                  ";
    cin >> movie;
    cout << "Adult Tickets Sold:          ";
    cin >> soldA;
    cout << "Child Tickets Sold:          ";
    cin >> soldC;

    // Calculate theater's gross and net box office profit for a night
    // and amount paid to distibutor
    total = (soldA * priceA) + (soldC * priceC);
    AmtKept = total * percent;
    AmtPaid = total - AmtKept;

    cout << "Gross Box Office Profit:    $ " <<total<< endl;
    cout << "Net Box Office Profit:      $ " <<AmtKept<< endl;
    cout << "Amount Paid to Distributor: $ " <<AmtPaid<< endl;

    // Exit Stage Right
    return 0;
}

