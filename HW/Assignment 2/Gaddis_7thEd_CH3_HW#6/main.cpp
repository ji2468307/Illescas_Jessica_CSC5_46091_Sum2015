/* 
 * File:   main.cpp
 * Author: Jessica Illescas 
 * Created: July 7, 2015, 1:21 PM
 * Purpose: How Many Widgets?
 */

// Syustem Libraries
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
    float widgets = 9.2; // A widget's weight in pounds
    float wpallet; // Weight of pallet in pounds by itself
    float wpalw;   // Weight of pallet in pounds with widgets stacked on it
    int nwidg; // Number of widgets stacked on a pallet

    cout << "How much does the pallet weigh (in pounds) by itself? ";
    cin >> wpallet;
    cout << "How much does the pallet weigh (in pounds) with the widgets"
         << " stacked on it? ";
    cin >> wpalw;

    // Calculate the number of widgets
    nwidg = (wpalw - wpallet) / widgets; 

    cout << "Number of widgets stacked on the pallet: " <<nwidg<< endl;
    
    // Exit Stage Right
    return 0;
}

