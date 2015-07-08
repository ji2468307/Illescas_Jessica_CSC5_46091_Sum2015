/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: July 8, 2015, 2:32 AM
 * Purpose: Changes for a Dollar Game
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
    int numP; // Number of pennies
    int numN; // Number of nickels
    int numD; // Number of dimes
    int numQ; // Number of quarters
    float penny = 0.01;    // Penny in cents
    float nickel = 0.05;   // Nickel in cents 
    float dime = 0.10;    // Dimes in cents
    float quarter = 0.25; // Quarter in cents
    float amtP; // Amount of pennies in cents
    float amtN; // Amount of nickels in cents
    float amtD; // Amount of dimes in cents
    float amtQ; // Amount of quarters in cents
    float totalM; // Total money in $'s

    cout << "Please enter the number of pennies: "; 
    cin >> numP;
    cout << "Please enter the number of nickels: "; 
    cin >> numN;
    cout << "Please enter the number of dimes: "; 
    cin >> numD;
    cout << "Please enter the number of quarters: "; 
    cin >> numQ;

    // Calculate the number of pennies, nickels, dimes, and quarters to cents
    amtP = numP * penny;
    amtN = numN * nickel;
    amtD = numD * dime;
    amtQ = numQ * quarter;
    totalM = amtP+amtN+amtD+amtQ;
    
    // Determine whether value of coins equal one dollar or are over or under
    if (totalM == 1.00)
    {
        cout << "Congratulations! You won the game!" << endl; 
    }

    if (totalM > 1.00)
    {
        cout << "Sorry, the amount entered was more than a $1" << endl;
    }

    if (totalM < 1.00)
    {
        cout << "Sorry, the amount entered was less than a $1" << endl;
    }
    
    // Exit Stage Right
    return 0;
}

