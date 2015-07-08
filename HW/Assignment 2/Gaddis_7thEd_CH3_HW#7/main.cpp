/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: July 7, 2015, 5:44 PM
 * Purpose: How Many Calories?
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
    // Declare and Initialize Variables
    int cook = 40; // Amount of cookies held in a bag
    int serv = 10; // Amount of servings in a bag
    int cal = 300; // Amount of calories a serving has 
    float amtCo;   // Amount of cookies eaten
    float totalCa; // Total calories consumed

    cout << "Please enter the amount of cookies you ate: "; 
    cin >> amtCo;

    // Calculate calories consumed
    totalCa = (amtCo/cook) * serv * cal;

    cout << "Total calories consumed: " <<totalCa<< endl;
    
    // Exit Stage Right
    return 0;
}

