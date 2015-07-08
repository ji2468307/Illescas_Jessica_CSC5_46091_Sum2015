/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: July 6, 2015, 1:20 AM
 * Purpose: Test Average
 */

// System Libraries
#include <cstdlib>
#include <iostream>  // I/O Library
#include <iomanip>   // Set precision
using namespace std; // Namespace For iostream 

/*
 *User Libraries
 *Global Constants
 *Function Prototypes
 */

// Execution Begins Here
int main(int argc, char** argv) {

    // Code Goes Here
    // Declare Variables
    float test1; // Test score 1
    float test2; // Test score 2
    float test3; // Test score 3
    float test4; // Test score 4
    float test5; // Test score 5
    float avg;   // Average test score 

    cout << fixed << setprecision(1); // Set to one decimal point
    cout << "Please enter test score 1: ";
    cin >> test1;
    cout << "Please enter test score 2: ";
    cin >> test2;
    cout << "Please enter test score 3: ";
    cin >> test3;
    cout << "Please enter test score 4: ";
    cin >> test4;
    cout << "Please enter test score 5: ";
    cin >> test5;

    // Calculate average test score
    avg = (test1 + test2 + test3 + test4 + test5) / 5; // All five test scores 
                                                       // divided by the number 
                                                       // of test scores

    cout << "Average test score is: " <<avg<< endl;

    // Exit Stage Right
    return 0;
}

