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
const int ROW1 = 4;
const int COL1 = 4;
const int ROW2 = 5;
const int COL2 = 5;
const int ROW3 = 6;
const int COL3 = 6;

// Function Prototypes
void compare1(string value1[][COL1], int rowA, int colA, int row2A, int col2A, int &rightA, int &wrongA);
void compare2(string value2[][COL2], int rowB, int colB, int row2B, int col2B, int &rightB, int &wrongB);
void compare3(string value3[][COL3], int rowC, int colC, int row2C, int col2C, int &rightC, int &wrongC);

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

                    string card[4][4];  // 2D array to hold the card 'X'
                    string value[4][4]; // 2D array to hold the value assigned
                    int rowA;
                    int colA;
                    int row2A;
                    int col2A;
                    int rightA = 0; // When user gets pair right, starts at 0
                    int wrongA = 0; // When user gets pair wrong, starts at 0

                    for(int rowA=0; rowA<4; rowA++) // Add X to card 2D array
                    {
                        for(int colA=0; colA<4; colA++)
                        {
                            card1[rowA][colA] = 'X';
                        }
                    }

                    value1[0][0] = "1";
                    value1[0][1] = "5";
                    value1[0][2] = "2";
                    value1[0][3] = "8";
                    value1[1][0] = "6";
                    value1[1][1] = "3";
                    value1[1][2] = "7";
                    value1[1][3] = "8";
                    value1[2][0] = "3";
                    value1[2][1] = "7";
                    value1[2][2] = "6";
                    value1[2][3] = "1";
                    value1[3][0] = "5";
                    value1[3][1] = "2";
                    value1[3][2] = "4";
                    value1[3][3] = "4";

                    cout << "Matching Game" << endl;
                    cout << "  |0|1|2|3" << endl;
                    cout << " 0|" <<card1[0][0]<< "|" <<card1[0][1]<< "|" <<card1[0][2]<< "|" <<card1[0][3]<< endl;
                    cout << " 1|" <<card1[1][0]<< "|" <<card1[1][1]<< "|" <<card1[1][2]<< "|" <<card1[1][3]<< endl;
                    cout << " 2|" <<card1[2][0]<< "|" <<card1[2][1]<< "|" <<card1[2][2]<< "|" <<card1[2][3]<< endl;
                    cout << " 3|" <<card1[3][0]<< "|" <<card1[3][1]<< "|" <<card1[3][2]<< "|" <<card1[3][3]<< endl;
                    cout << " " << endl;
                    cout << "Please enter the following" << endl;
                    cout << " " << endl;

                    do{
                        cout << "FIRST CHOICE" << endl;
                        cout << "row: ";
                        cin >> rowA;
                        cout << "column: ";
                        cin >> colA;

                        cout << "SECOND CHOICE" << endl;
                        cout << "row: ";
                        cin >> row2A;
                        cout << "column: ";
                        cin >> col2A;
                        cout << " " << endl;

                        compare1(value1,rowA,colA,row2A,col2A,rightA,wrongA); // Compare the users choices
                      }while(rightA != 8 && wrongA != 4);

                    if(rightA == 8) // User gets all pairs right
                    {
                        cout << "You got all 8 matching pairs" << endl;
                        cout << "CONGRATULATIONS, YOU WON!" << endl;
                    }

                    if(wrongA == 4) // User gets four pairs wrong 
                    {
                        cout << "You were wrong 4 times" << endl;
                        cout << "GAME OVER" << endl;
                    }
                    break;

            case 2: cout << "Type of difficulty choosen: MEDIUM" <<endl;
                    cout << "In MEDIUM mode you will have no more than 25 cards";
                    cout << " which you will have to find 12 pairs to match" <<endl;
                    cout << "Notice that there is a card that has no pair?" <<endl;    
                    cout << "Well if you happen to choose or pair,"; 
                    cout << " the game will automayically be a GAME OVER." <<endl;
                    cout << "You will be given 6 chances";
                    cout << " before a GAME OVER is declared." <<endl;

                    string card2[5][5];  // 2D array to hold the card 'X'
                    string value2[5][5]; // 2D array to hold the value assigned
                    int rowB;
                    int colB;
                    int row2B;
                    int col2B;
                    int rightB = 0; // When user gets pair right, starts at 0
                    int wrongB = 0; // When user gets pair wrong, starts at 0

                    for(int rowB=0; rowB<5; rowB++) // Add X to card 2D array
                    {
                        for(int colB=0; colB<5; colB++)
                        {
                            card2[rowB][colB] = 'X';
                        }
                    }

                    value2[0][0] = "1";
                    value2[0][1] = "5";
                    value2[0][2] = "2";
                    value2[0][3] = "8";
                    value2[0][4] = "10";
                    value2[1][0] = "6";
                    value2[1][1] = "3";
                    value2[1][2] = "7";
                    value2[1][3] = "8";
                    value2[1][4] = "12";
                    value2[2][0] = "3";
                    value2[2][1] = "7";
                    value2[2][2] = "6";
                    value2[2][3] = "1";
                    value2[2][4] = "9";
                    value2[3][0] = "5";
                    value2[3][1] = "2";
                    value2[3][2] = "4";
                    value2[3][3] = "4";
                    value2[3][4] = "11";
                    value2[4][0] = "9";
                    value2[4][1] = "12";
                    value2[4][2] = "10";
                    value2[4][3] = "13";
                    value2[4][4] = "11";

                    cout << "Matching Game" << endl;
                    cout << "  |0|1|2|3|4" << endl;
                    cout << " 0|" <<card2[0][0]<< "|" <<card2[0][1]<< "|" <<card2[0][2];
                    cout << "|" <<card2[0][3]<< "|" <<card2[0][4]<< endl;
                    cout << " 1|" <<card2[1][0]<< "|" <<card2[1][1]<< "|" <<card2[1][2];
                    cout << "|" <<card2[1][3]<< "|" <<card2[1][4]<< endl;
                    cout << " 2|" <<card2[2][0]<< "|" <<card2[2][1]<< "|" <<card2[2][2];
                    cout << "|" <<card2[2][3]<< "|" <<card2[2][4]<< endl;
                    cout << " 3|" <<card2[3][0]<< "|" <<card2[3][1]<< "|" <<card2[3][2];
                    cout << "|" <<card2[3][3]<< "|" <<card2[3][4]<< endl;
                    cout << " 4|" <<card2[4][0]<< "|" <<card2[4][1]<< "|" <<card2[4][2];
                    cout << "|" <<card2[4][3]<< "|" <<card2[4][4]<< endl;
                    cout << " " << endl;
                    cout << "Please enter the following" << endl;
                    cout << " " << endl;

                    do{
                        cout << "FIRST CHOICE" << endl;
                        cout << "row: ";
                        cin >> rowB;
                        cout << "column: ";
                        cin >> colB;

                        cout << "SECOND CHOICE" << endl;
                        cout << "row: ";
                        cin >> row2B;
                        cout << "column: ";
                        cin >> col2B;
                        cout << " " << endl;

                        compare2(value2,rowB,colB,row2B,col2B,rightB,wrongB); // Compare the users choices
                      }while(rightB != 12 && wrongB != 6);

                    if(rightB == 12) // User gets all pairs right
                    {
                        cout << "You got all 12 matching pairs" << endl;
                        cout << "CONGRATULATIONS, YOU WON!" << endl;
                    }

                    if(wrongB == 6) // User gets 6 pairs wrong 
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

                    string card3[6][6];  // 2D array to hold the card 'X'
                    string value3[6][6]; // 2D array to hold the value assigned
                    int rowC;
                    int colC;
                    int row2C;
                    int col2C;
                    int rightC = 0; // When user gets pair right, starts at 0
                    int wrongC = 0; // When user gets pair wrong, starts at 0

                    for(int rowC=0; rowC<6; rowC++) // Add X to card 2D array
                    {
                        for(int colC=0; colC<6; colC++)
                        {
                            card3[rowC][colC] = 'X';
                        }
                    }

                    value3[0][0] = "1";
                    value3[0][1] = "5";
                    value3[0][2] = "2";
                    value3[0][3] = "8";
                    value3[0][4] = "10";
                    value3[0][5] = "13";
                    value3[1][0] = "6";
                    value3[1][1] = "3";
                    value3[1][2] = "7";
                    value3[1][3] = "8";
                    value3[1][4] = "12";
                    value3[1][5] = "14";
                    value3[2][0] = "3";
                    value3[2][1] = "7";
                    value3[2][2] = "6";
                    value3[2][3] = "1";
                    value3[2][4] = "9";
                    value3[2][5] = "15";
                    value3[3][0] = "5";
                    value3[3][1] = "2";
                    value3[3][2] = "4";
                    value3[3][3] = "4";
                    value3[3][4] = "11";
                    value3[3][5] = "16";
                    value3[4][0] = "9";
                    value3[4][1] = "12";
                    value3[4][2] = "10";
                    value3[4][3] = "13";
                    value3[4][4] = "11";
                    value3[4][5] = "17";
                    value3[5][0] = "15";
                    value3[5][1] = "17";
                    value3[5][2] = "18";
                    value3[5][3] = "18";
                    value3[5][4] = "14";
                    value3[5][5] = "16";

                    cout << "Matching Game" << endl;
                    cout << "  |0|1|2|3|4|5" << endl;
                    cout << " 0|" <<card3[0][0]<< "|" <<card3[0][1]<< "|" <<card3[0][2];
                    cout << "|" <<card3[0][3]<< "|" <<card3[0][4]<< "|" <<card3[0][5]<< endl;
                    cout << " 1|" <<card3[1][0]<< "|" <<card3[1][1]<< "|" <<card3[1][2];
                    cout << "|" <<card3[1][3]<< "|" <<card3[1][4]<< "|" <<card3[1][5]<< endl;
                    cout << " 2|" <<card3[2][0]<< "|" <<card3[2][1]<< "|" <<card3[2][2];
                    cout << "|" <<card3[2][3]<< "|" <<card3[2][4]<< "|" <<card3[2][5]<< endl;
                    cout << " 3|" <<card3[3][0]<< "|" <<card3[3][1]<< "|" <<card3[3][2];
                    cout << "|" <<card3[3][3]<< "|" <<card3[3][4]<< "|" <<card3[3][5]<< endl;
                    cout << " 4|" <<card3[4][0]<< "|" <<card3[4][1]<< "|" <<card3[4][2];
                    cout << "|" <<card3[4][3]<< "|" <<card3[4][4]<< "|" <<card3[4][5]<< endl;
                    cout << " 5|" <<card3[5][0]<< "|" <<card3[5][1]<< "|" <<card3[5][2];
                    cout << "|" <<card3[5][3]<< "|" <<card3[5][4]<< "|" <<card3[5][5]<< endl;
                    cout << " " << endl;
                    cout << "Please enter the following" << endl;
                    cout << " " << endl;

                    do{
                        cout << "FIRST CHOICE" << endl;
                        cout << "row: ";
                        cin >> rowC;
                        cout << "column: ";
                        cin >> colC;

                        cout << "SECOND CHOICE" << endl;
                        cout << "row: ";
                        cin >> row2C;
                        cout << "column: ";
                        cin >> col2C;
                        cout << " " << endl;

                        compare3(value3,rowC,colC,row2C,col2C,rightC,wrongC); // Compare the users choices
                      }while(rightC != 18 && wrongC != 9);

                    if(rightC == 18) // User gets all pairs right
                    {
                        cout << "You got all 18 matching pairs" << endl;
                        cout << "CONGRATULATIONS, YOU WON!" << endl;
                    }

                    if(wrongC == 9) // User gets nine pairs wrong 
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
void compare1(string value1[][COL1], int rowA, int colA, int row2A, int col2A, int &rightA, int &wrongA)
{
    cout << "Card 1 value: " <<value1[rowA][colA]<< endl;
    cout << "Card 2 value: " <<value1[row2A][col2A]<< endl;

    if (value1[rowA][colA] == value1[row2A][col2A])
    {
        cout << "MATCH!" << endl;
        rightA++;
        cout << "# of right times: " << rightA << endl << endl;
    }

    else if (value1[rowA][colA]!= value1[row2A][col2A])
    {
        cout << "This is not a match, TRY AGAIN" << endl;
        wrongA++;
        cout << "# of wrong times: " << wrongA << endl << endl;
    }
}

void compare2(string value2[][COL2], int rowB, int colB, int row2B, int col2B, int &rightB, int &wrongB)
{
    cout << "Card 1 value: " <<value2[rowB][colB]<< endl;
    cout << "Card 2 value: " <<value2[row2B][col2B]<< endl;

    if (value2[rowB][colB] == value2[row2B][col2B])
    {
        cout << "MATCH!" << endl;
        rightB++;
        cout << "# of right times: " << rightB << endl << endl;
    }

    else if (value2[rowB][colB]!= value2[row2B][col2B])
    {
        cout << "This is not a match, TRY AGAIN" << endl;
        wrongB++;
        cout << "# of wrong times: " << wrongB << endl << endl;
    }
}

void compare3(string value3[][COL3], int rowC, int colC, int row2C, int col2C, int &rightC, int &wrongC)
{
    cout << "Card 1 value: " <<value3[rowC][colC]<< endl;
    cout << "Card 2 value: " <<value3[row2C][col2C]<< endl;

    if (value3[rowC][colC] == value3[row2C][col2C])
    {
        cout << "MATCH!" << endl;
        rightC++;
        cout << "# of right times: " << rightC << endl << endl;
    }

    else if (value3[rowC][colC]!= value3[row2C][col2C])
    {
        cout << "This is not a match, TRY AGAIN" << endl;
        wrongC++;
        cout << "# of wrong times: " << wrongC << endl << endl;
    }
}