/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: June 26, 2015, 5:59 PM
 * Purpose: Land Calculation
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
    float acre = 43560.0;  // One acre is equivalent to # sq ft
    float land = 389767.0; // tract of land is # sq ft

    // Calculate Number of Acres
    float numacres = land / acre; // Number of acres in a tract of land with # 
                                  // sq ft
    
    // Output the Results
    cout << "The number of acres in a tract of land with " <<land<< " sq ft"
         << endl;
    cout << "is " <<numacres<< " acres of land." << endl;
    
    // Exit Stage Right
    return 0;
}

