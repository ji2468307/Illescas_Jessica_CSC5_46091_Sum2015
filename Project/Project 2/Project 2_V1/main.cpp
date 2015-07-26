/* 
 * File:   main.cpp
 * Author: Jessica Illescas 
 * Created on July 15, 2015, 11:25 PM
 * Purpose: Matching Game
 */

// System Libraries
#include <cstdlib>
#include <iostream>  // I/O Library
using namespace std; // Namespace for iostream

// User Libraries

// Global Constants
const int ROW = 4;
const int COL = 4;

// Function Prototypes
void compare(char value[][COL], int row, int col, int row2, int col2, int &right, int &wrong);


// Execution Begins Here
int main(int argc, char** argv) {
    
    // Code Goes Here
    // Declare Variables
    char card[4][4];  // 2D array to hold the card 'X'
    char value[4][4]; // 2D array to hold the value assigned
    int row;
    int col;
    int row2;
    int col2;
    int right = 0; // When user gets pair right, starts at 0
    int wrong = 0; // When user gets pair wrong, starts at 0
    
    for(int row=0; row<4; row++) // Add X to card 2D array
    {
        for(int col=0; col<4; col++)
        {
            card[row][col] = 'X';
        }
    }

    value[0][0] = '1';
    value[0][1] = '5';
    value[0][2] = '2';
    value[0][3] = '8';
    value[1][0] = '6';
    value[1][1] = '3';
    value[1][2] = '7';
    value[1][3] = '8';
    value[2][0] = '3';
    value[2][1] = '7';
    value[2][2] = '6';
    value[2][3] = '1';
    value[3][0] = '5';
    value[3][1] = '2';
    value[3][2] = '4';
    value[3][3] = '4';

    cout << "Matching Game" << endl;
    cout << "  |0|1|2|3" << endl;
    cout << " 0|" <<card[0][0]<< "|" <<card[0][1]<< "|" <<card[0][2]<< "|" <<card[0][3]<< endl;
    cout << " 1|" <<card[1][0]<< "|" <<card[1][1]<< "|" <<card[1][2]<< "|" <<card[1][3]<< endl;
    cout << " 2|" <<card[2][0]<< "|" <<card[2][1]<< "|" <<card[2][2]<< "|" <<card[2][3]<< endl;
    cout << " 3|" <<card[3][0]<< "|" <<card[3][1]<< "|" <<card[3][2]<< "|" <<card[3][3]<< endl;
    cout << " " << endl;
    cout << "Please enter the following" << endl;
    cout << " " << endl;

    do{
        cout << "FIRST CHOICE" << endl;
        cout << "row: ";
        cin >> row;
        cout << "column: ";
        cin >> col;

        cout << "SECOND CHOICE" << endl;
        cout << "row: ";
        cin >> row2;
        cout << "column: ";
        cin >> col2;
        cout << " " << endl;

        compare(value,row,col,row2,col2,right, wrong); // Compare the users choices
      }while(right != 8 && wrong != 4);
    
    if(right == 8) // User gets all pairs right
    {
        cout << "You got all 8 matching pairs" << endl;
        cout << "CONGRATULATIONS, YOU WON!" << endl;
    }

    if(wrong == 4) // User gets three pairs wrong 
    {
        cout << "You were wrong 4 times" << endl;
        cout << "GAME OVER" << endl;
    }

    // Exit Stage Right
    return 0;
}

// Used to compare the value of the 2D array value of cards
void compare(char value[][COL], int row, int col, int row2, int col2, int &right, int &wrong)
{
    cout << "Card 1 value: " <<value[row][col]<< endl;
    cout << "Card 2 value: " <<value[row2][col2]<< endl;

    if (value[row][col] == value[row2][col2])
    {
        cout << "MATCH!" << endl;
        right++;
        cout << "# of right times: " << right << endl << endl;
    }

    else if (value[row][col]!= value[row2][col2])
    {
        cout << "This is not a match, TRY AGAIN" << endl;
        wrong++;
        cout << "# of wrong times: " << wrong << endl << endl;
    }
}