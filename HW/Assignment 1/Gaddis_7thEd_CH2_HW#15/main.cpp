/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: June 26, 2015, 9:55 PM
 * Purpose: Triangle Pattern
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
    
    // Your Code Goes Here
    // Declare and Initialize Variables
    // Spaces per row
    string row1 = "   "; 
    string row2 = "  ";
    string row3 = " ";
    string row4 = "";

    // Output the Results
    // Number of asterisks
    cout <<row1<< "*" << endl;
    cout <<row2<< "***" << endl;
    cout <<row3<< "*****" << endl; 
    cout <<row4<< "*******" << endl;

    // Exit Stage Right
    return 0;
}

