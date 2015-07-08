/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: July 7, 2015, 8:06 PM
 * Purpose: Automobile Costs
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
    float LPcost; // Loan Payment cost in $'s 
    float Icost;  // Insurance cost in $'s
    float Gcost;  // Gas cost in $'s 
    float Ocost;  // Oil cost in $'s 
    float Tcost;  // Tires cost in $'s 
    float Mcost;  // Maintenance cost in $'s 
    float monthC; // Monthly costs in $'s for expenses from operating automobile
    int annual = 12; // Number of months in a year
    float annualC; // Total annual cost in $'s for expenses from 
                  // operating autombile

    cout << "Please enter the following monthly costs incurred from"
         << " operating your automobile" << endl;
    cout << "Loan Payment: $"; 
    cin >> LPcost;
    cout << "Insurance:    $";
    cin >> Icost; 
    cout << "Gas:          $";
    cin >> Gcost;
    cout << "Oil:          $";
    cin >> Ocost;
    cout << "Tires:        $";
    cin >> Tcost;
    cout << "Maintenance:  $";
    cin >> Mcost;

    // Calculate total monthly and annual cost
    monthC = LPcost+Icost+Gcost+Ocost+Tcost+Mcost;
    annualC = monthC * annual;

    cout << "Total monthly cost of these expenses: $"<<monthC<< endl;
    cout << "Total annual cost of these expenses:  $"<<annualC<< endl;

    // Exit Stage Right
    return 0;
}

