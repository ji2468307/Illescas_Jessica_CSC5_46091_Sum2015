/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: June 26, 2015, 4:40 PM
 * Purpose: Distance per Tank of Gas
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

//Execution Begins Here
int main(int argc, char** argv) {
    
    // Your Code Goes Here
    // Declare and Initialize Variables
    float gallTank = 20;   // Car has a 20-gallon of gas tank
    float avgtown = 21.5f; // Average mpg when driven in town
    float avghw = 26.8f;   // Average mpg when driven in highway

    // Calculate Distance Traveled in Town and Highway
    float dstancet = gallTank * avgtown; // Distance car travels mpg in town
    float dstanceh = gallTank * avghw;   // Distance car travels mpg in highway

    // Output the Results
    cout << "The distance a car can travel on a " <<gallTank<< "-gallon gas "
         << endl; 
    cout << "when driven in town is " <<dstancet<< " mpg and " << endl;
    cout << "when driven on the highway is " <<dstanceh<< " mpg." << endl;

    // Exit Stage Right
    return 0;
}

