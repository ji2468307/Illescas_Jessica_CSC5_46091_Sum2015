/* 
 * File:   main.cpp
 * Author: Jessica Illescas 
 * Created on July 15, 2015, 11:25 PM
 * Purpose: Matching Game
 */

// System Libraries
#include <cstdlib>
#include <iostream>  // I/O Library
#include <iomanip>   // Set Precision
using namespace std; // Namespace for iostream

// User Libraries

// Global Constants
const int ROW = 4;
const int COL = 4;
const int ROW = 5;
const int COL = 5;
const int ROW = 6;
const int COL = 6;

// Function Prototypes
void compare(char value[][COL], int row, int col, int row2, int col2, int &right, int &wrong);

// Execution Begins Here
int main(int argc, char** argv) {

    // Code Goes Here
    // Declare Variables
    int typDif; // Type of difficulty: easy, medium, hard

    cout << "Matching Game" <<endl;
    cout << "Welcome!" <<endl;
    cout << "This is a game about MEMORY and MATCHING a set of cards." <<endl;
    cout << "You choose the type of difficulty you would want to play." <<endl;
    cout << "Depending on the difficulty you choose," <<endl;
    cout << "it is up to you to match by memory." <<endl;
    cout << "Good Luck!" <<endl <<endl;
    START:
    cout << "What type of difficulty would you like?" <<endl;
    cout << "1) Easy" <<endl;
    cout << "2) Meduim" <<endl;
    cout << "3) Hard" <<endl;
    cout << "Choose from 1-3 in order of difficulty." <<endl;
    cout << "Please enter the number only" <<endl;
    cin >> typDif;
    cout << " " <<endl;

    if (typDif >= 1 && typDif <= 3)
    {   
        switch(typDif)
        {
            case 1: cout << "Type of difficulty choosen: EASY" <<endl;
                    cout << "In EASY mode you will have no more than 16 cards";
                    cout << " which you will have to find 8 pairs to match." <<endl;
                    cout << "You will be given 4 chances";
                    cout << " before a GAME OVER is declared." <<endl;

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

                    if(wrong == 4) // User gets four pairs wrong 
                    {
                        cout << "You were wrong 4 times" << endl;
                        cout << "GAME OVER" << endl;
                    }
                    break;

            case 2: cout << "Type of diffuclty choosen: MEDIUM" <<endl;
                    cout << "In MEDIUM mode you will have no more than 25 cards";
                    cout << " which you will have to find 12 pairs to match" <<endl;
                    cout << "Notice that there is a card that has no pair?" <<endl;    
                    cout << "Well if you happen to choose or pair,"; 
                    cout << " the game will automayically be a GAME OVER." <<endl;
                    cout << "You will be given 6 chances";
                    cout << " before a GAME OVER is declared." <<endl;

                    char card[5][5];  // 2D array to hold the card 'X'
                    char value[5][5]; // 2D array to hold the value assigned
                    int row;
                    int col;
                    int row2;
                    int col2;
                    int right = 0; // When user gets pair right, starts at 0
                    int wrong = 0; // When user gets pair wrong, starts at 0

                    for(int row=0; row<5; row++) // Add X to card 2D array
                    {
                        for(int col=0; col<5; col++)
                        {
                            card[row][col] = 'X';
                        }
                    }

                    value[0][0] = '1';
                    value[0][1] = '5';
                    value[0][2] = '2';
                    value[0][3] = '8';
                    value[0][4] = '10';
                    value[1][0] = '6';
                    value[1][1] = '3';
                    value[1][2] = '7';
                    value[1][3] = '8';
                    value[1][4] = '12';
                    value[2][0] = '3';
                    value[2][1] = '7';
                    value[2][2] = '6';
                    value[2][3] = '1';
                    value[2][4] = '9';
                    value[3][0] = '5';
                    value[3][1] = '2';
                    value[3][2] = '4';
                    value[3][3] = '4';
                    value[3][4] = '11';
                    value[4][0] = '9';
                    value[4][1] = '12';
                    value[4][2] = '10';
                    value[4][3] = '13';
                    value[4][4] = '11';

                    cout << "Matching Game" << endl;
                    cout << "  |0|1|2|3|4" << endl;
                    cout << " 0|" <<card[0][0]<< "|" <<card[0][1]<< "|" <<card[0][2];
                    cout << "|" <<card[0][3]<< "|" <<card[0][4]<< endl;
                    cout << " 1|" <<card[1][0]<< "|" <<card[1][1]<< "|" <<card[1][2];
                    cout << "|" <<card[1][3]<< "|" <<card[1][4]<< endl;
                    cout << " 2|" <<card[2][0]<< "|" <<card[2][1]<< "|" <<card[2][2];
                    cout << "|" <<card[2][3]<< "|" <<card[2][4]<< endl;
                    cout << " 3|" <<card[3][0]<< "|" <<card[3][1]<< "|" <<card[3][2];
                    cout << "|" <<card[3][3]<< "|" <<card[3][4]<< endl;
                    cout << " 4|" <<card[4][0]<< "|" <<card[4][1]<< "|" <<card[4][2];
                    cout << "|" <<card[4][3]<< "|" <<card[4][4]<< endl;
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
                      }while(right != 12 && wrong != 6);

                    if(right == 12) // User gets all pairs right
                    {
                        cout << "You got all 12 matching pairs" << endl;
                        cout << "CONGRATULATIONS, YOU WON!" << endl;
                    }

                    if(wrong == 6) // User gets 6 pairs wrong 
                    {
                        cout << "You were wrong 6 times" << endl;
                        cout << "GAME OVER" << endl;
                    }
                    break;

            case 3: cout << "Type of difficulty choosen: HARD" <<endl;
                    cout << "In HARD mode you will have no more than 36 cards";
                    cout << " which you will have to find 18 pairs to match" <<endl;
                    cout << "You will be given 9 chances";
                    cout << " before a GAME OVER is declared." <<endl;

                    char card[6][6];  // 2D array to hold the card 'X'
                    char value[6][6]; // 2D array to hold the value assigned
                    int row;
                    int col;
                    int row2;
                    int col2;
                    int right = 0; // When user gets pair right, starts at 0
                    int wrong = 0; // When user gets pair wrong, starts at 0

                    for(int row=0; row<6; row++) // Add X to card 2D array
                    {
                        for(int col=0; col<6; col++)
                        {
                            card[row][col] = 'X';
                        }
                    }

                    value[0][0] = '1';
                    value[0][1] = '5';
                    value[0][2] = '2';
                    value[0][3] = '8';
                    value[0][4] = '10';
                    value[0][5] = '13';
                    value[1][0] = '6';
                    value[1][1] = '3';
                    value[1][2] = '7';
                    value[1][3] = '8';
                    value[1][4] = '12';
                    value[1][5] = '14';
                    value[2][0] = '3';
                    value[2][1] = '7';
                    value[2][2] = '6';
                    value[2][3] = '1';
                    value[2][4] = '9';
                    value[2][5] = '15';
                    value[3][0] = '5';
                    value[3][1] = '2';
                    value[3][2] = '4';
                    value[3][3] = '4';
                    value[3][4] = '11';
                    value[3][5] = '16';
                    value[4][0] = '9';
                    value[4][1] = '12';
                    value[4][2] = '10';
                    value[4][3] = '13';
                    value[4][4] = '11';
                    value[4][5] = '17';
                    value[5][0] = '15';
                    value[5][1] = '17';
                    value[5][2] = '18';
                    value[5][3] = '18';
                    value[5][4] = '14';
                    value[5][5] = '16';

                    cout << "Matching Game" << endl;
                    cout << "  |0|1|2|3|4|5" << endl;
                    cout << " 0|" <<card[0][0]<< "|" <<card[0][1]<< "|" <<card[0][2];
                    cout << "|" <<card[0][3]<< "|" <<card[0][4]<< "|" <<card[0][5]<< endl;
                    cout << " 1|" <<card[1][0]<< "|" <<card[1][1]<< "|" <<card[1][2];
                    cout << "|" <<card[1][3]<< "|" <<card[1][4]<< "|" <<card[1][5]<< endl;
                    cout << " 2|" <<card[2][0]<< "|" <<card[2][1]<< "|" <<card[2][2];
                    cout << "|" <<card[2][3]<< "|" <<card[2][4]<< "|" <<card[2][5]<< endl;
                    cout << " 3|" <<card[3][0]<< "|" <<card[3][1]<< "|" <<card[3][2];
                    cout << "|" <<card[3][3]<< "|" <<card[3][4]<< "|" <<card[3][5]<< endl;
                    cout << " 4|" <<card[4][0]<< "|" <<card[4][1]<< "|" <<card[4][2];
                    cout << "|" <<card[4][3]<< "|" <<card[4][4]<< "|" <<card[4][5]<< endl;
                    cout << " 5|" <<card[5][0]<< "|" <<card[5][1]<< "|" <<card[5][2];
                    cout << "|" <<card[5][3]<< "|" <<card[5][4]<< "|" <<card[5][5]<< endl;
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
                      }while(right != 18 && wrong != 9);

                    if(right == 18) // User gets all pairs right
                    {
                        cout << "You got all 18 matching pairs" << endl;
                        cout << "CONGRATULATIONS, YOU WON!" << endl;
                    }

                    if(wrong == 9) // User gets nine pairs wrong 
                    {
                        cout << "You were wrong 9 times" << endl;
                        cout << "GAME OVER" << endl;
                    }

                    break;
        }
    }

    else if (typDif < 1 || typDif > 3)
    {
        cout << "ERROR!" <<endl;
        cout << "That is not a number between 1-3" <<endl <<endl;
        goto START;
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

