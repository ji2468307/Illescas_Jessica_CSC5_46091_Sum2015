/* 
 * File:   main.cpp
 * Author: Jessica Illescas
 * Created: July 8, 2015, 3:06 AM
 * Purpose: Math Tutor
 */

// System Libraries
#include <cstdlib>
#include <iostream>  // I/O Library
using namespace std; // Namespace for iostream

/*
 *User Libraries
 *Global Constants
 *Function prototypes
 */

// Execution Begins Here
int main(int argc, char** argv) {
    
    // Code Goes Here
    // Declare Variables
    srand(static_cast<unsigned int>(time(0))); // Random numbers from 0 to a billion
    int Rnum1 = rand()%999; // Random first number from 0-999
    int Rnum2 = rand()&999; // Random second number from 0-999
    int choice; // Player's choice of answer
    int answer; // Answer for numbers 1 and 2

    // Calculate answer by adding
    answer = Rnum1 + Rnum2;

    cout << " " <<Rnum1<< endl;
    cout << "+" << Rnum2<< endl;
    cout << "----" << endl;
    cin >> choice;

    // Determine if asnwer is correct or incorrect
    if (answer == choice)
    {
        cout << "Congratulations! Your answer is CORRECT."<< endl;
    }

    else if (answer != choice)
    {
        cout << "Your answer is INCORRECT." << endl;
    }

    // Exit Stage Right
    return 0;
}

