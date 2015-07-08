/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: July 7, 2015, 11:14 PM
 * Purpose: Areas of Rectangles
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
    float length1;
    float width1;
    float length2;
    float width2;
    float area1;
    float area2;

    cout << "Please enter the following" << endl;
    cout << "Rectangle 1" << endl;
    cout << "Length: ";
    cin >> length1;
    cout << "Width:  ";
    cin >> width1;
    cout << "Rectangle 2" << endl;
    cout << "Length: ";
    cin >> length2;
    cout << "Width:  ";
    cin >> width2;

    // Calculate area of rectangle
    area1 = length1 * width1;
    area2 = length2 * width2;

    // Determine which rectangle has the greater area, or if areas are the same  
    if (area1>area2) 
    {
        cout << "Rectangle 1 has the greater area" << endl;
    }

    if (area1<area2)
    {
        cout << "Rectangle 2 has the greater area" << endl;
    }
    
    else if (area1==area2)
    {
        cout << "Areas for rectangle 1 and 2 are the same" << endl;
    }

    // Exit Stage Right
    return 0;
}

