/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: June 26, 2015, 9:29 PM
 * Purpose: Personal Information
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
    // Declare Variables
    string name; 
    string address,city,state,zipcode;
    string phnumb;
    string collmaj;
 
    // Initialize Variables
    name = "Jessica";
    address = "123 KitKat Street";
    city = "Los Angeles";
    state = "California";
    zipcode = "90022";
    phnumb = "1(323)516-0051";
    collmaj = "Psychology";

    // Output the Results
    cout <<name<< endl;
    cout <<address<< ", "<<city<< ", " <<zipcode<< endl;
    cout <<phnumb<< endl; 
    cout <<collmaj<< endl;

    // Exit Stage Right
    return 0;
}

