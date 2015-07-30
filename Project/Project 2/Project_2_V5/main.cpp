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
const int ROW3 = 6; 
const int COL3 = 6;

// Function Prototypes
void intro();
void mode(int &typDif);
void introE();
void introM();
void introH();
void fillCard(int &typDif, char card[][COL3]);
void fillValue(int &typDif, string value[][COL3]);
void matchTemp(int &typDif, char card[][COL3]);
void compare(int &typDif, string value[][COL3]);

// Execution Begins Here
int main(int argc, char** argv) {

    // Code Goes Here
    // Declare Variables
    int typDif = 0; // Type of difficulty: easy, medium, hard
    char card[ROW3][COL3]; //create card array -> will be modified later down
    string value[ROW3][COL3]; //same for value, max size used but then will be shrunk
    

    intro(); //start the introduction
    START:

    mode(typDif); //select diff
    

    if (typDif >= 1 && typDif <= 3) //choose only certain difficulty
    {   
        switch(typDif) //use certain amount depending on diff
        {
            case 1: introE();

                    fillCard(typDif,card); // 2D array to hold the card 'X'
                    fillValue(typDif,value); //fill Value with chosen mode
                    matchTemp(typDif,card);
                    compare(typDif,value);                    
                    break;

            case 2: introM();
                    fillCard(typDif,card); // 2D array to hold the card 'X'
                    fillValue(typDif,value); //fill Value with chosen mode
                    matchTemp(typDif,card);
                    compare(typDif,value);                    
                    break;

            case 3: introH();
                    fillCard(typDif,card); // 2D array to hold the card 'X'
                    fillValue(typDif,value); //fill Value with chosen mode
                    matchTemp(typDif,card);
                    compare(typDif,value);                    
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
} //end of program

void intro() //used for intrduction
{
    cout << "Matching Game" <<endl;
    cout << "Welcome!" <<endl;
    cout << "This is a game about MEMORY and MATCHING a set of cards." <<endl;
    cout << "You choose the type of difficulty you would want to play." <<endl;
    cout << "Depending on the difficulty you choose," <<endl;
    cout << "it is up to you to match by memory." <<endl;
    cout << "Good Luck!" <<endl <<endl;
}; //end of intro void

void mode(int &typDif) // to save user's choice of E/M/H
{
    cout << "What type of difficulty would you like?" <<endl;
    cout << "1) Easy" <<endl;
    cout << "2) Meduim" <<endl;
    cout << "3) Hard" <<endl;
    cout << "Choose from 1-3 in order of difficulty." <<endl;
    cout << "Please enter the number only" <<endl;
    cin >> typDif;
    cout << " " <<endl;
}; //end of mod void

void introE()
{
    cout << "Type of difficulty choosen: EASY" <<endl;
    cout << "In EASY mode you will have no more than 16 cards";
    cout << " which you will have to find 8 pairs to match." <<endl;
    cout << "You will be given 4 chances";
    cout << " before a GAME OVER is declared." <<endl;
}; //end of introE

void introM()
{
    cout << "Type of difficulty choosen: MEDIUM" <<endl;
    cout << "In MEDIUM mode you will have no more than 25 cards";
    cout << " which you will have to find 12 pairs to match" <<endl;
    cout << "Notice that there is a card that has no pair?" <<endl;    
    cout << "Well if you happen to choose or pair,"; 
    cout << " the game will automayically be a GAME OVER." <<endl;
    cout << "You will be given 6 chances";
    cout << " before a GAME OVER is declared." <<endl;
}; //end of introM;

void introH()
{
    cout << "Type of difficulty choosen: HARD" <<endl;
    cout << "In HARD mode you will have no more than 36 cards";
    cout << " which you will have to find 18 pairs to match" <<endl;
    cout << "You will be given 9 chances";
    cout << " before a GAME OVER is declared." <<endl;
}; //end of introH

void fillCard(int &typDif, char card[][COL3])
{
    int a =0;
    int b =0;

    if(typDif == 1)
    {
       a = 4;
       b = 4;
    }
    if(typDif == 2)
    {
        a = 5;
        b = 5;
    }
    if(typDif == 3)
    {
        a = 6;
        b = 6;
    }

    for(int row=0; row<a; row++) // Add X to card 2D array
    {
        for(int col=0; col<b; col++)
        {
            card[row][col] = 'X';
        }
    }
}; //end of fillArray

void fillValue(int &typDif, string value[][COL3])
{
    if(typDif == 1)
    {
        value[0][0] = "1";
        value[0][1] = "5";
        value[0][2] = "2";
        value[0][3] = "8";
        value[1][0] = "6";
        value[1][1] = "3";
        value[1][2] = "7";
        value[1][3] = "8";
        value[2][0] = "3";
        value[2][1] = "7";
        value[2][2] = "6";
        value[2][3] = "1";
        value[3][0] = "5";
        value[3][1] = "2";
        value[3][2] = "4";
        value[3][3] = "4";
    }
    if(typDif == 2)
    {
        value[0][0] = "1";
        value[0][1] = "5";
        value[0][2] = "2";
        value[0][3] = "8";
        value[0][4] = "10";
        value[1][0] = "6";
        value[1][1] = "3";
        value[1][2] = "7";
        value[1][3] = "8";
        value[1][4] = "12";
        value[2][0] = "3";
        value[2][1] = "7";
        value[2][2] = "6";
        value[2][3] = "1";
        value[2][4] = "9";
        value[3][0] = "5";
        value[3][1] = "2";
        value[3][2] = "4";
        value[3][3] = "4";
        value[3][4] = "11";
        value[4][0] = "9";
        value[4][1] = "12";
        value[4][2] = "10";
        value[4][3] = "13";
        value[4][4] = "11";
    }
    if(typDif == 3)
    {
        value[0][0] = "1";
        value[0][1] = "5";
        value[0][2] = "2";
        value[0][3] = "8";
        value[0][4] = "10";
        value[0][5] = "13";
        value[1][0] = "6";
        value[1][1] = "3";
        value[1][2] = "7";
        value[1][3] = "8";
        value[1][4] = "12";
        value[1][5] = "14";
        value[2][0] = "3";
        value[2][1] = "7";
        value[2][2] = "6";
        value[2][3] = "1";
        value[2][4] = "9";
        value[2][5] = "15";
        value[3][0] = "5";
        value[3][1] = "2";
        value[3][2] = "4";
        value[3][3] = "4";
        value[3][4] = "11";
        value[3][5] = "16";
        value[4][0] = "9";
        value[4][1] = "12";
        value[4][2] = "10";
        value[4][3] = "13";
        value[4][4] = "11";
        value[4][5] = "17";
        value[5][0] = "15";
        value[5][1] = "17";
        value[5][2] = "18";
        value[5][3] = "18";
        value[5][4] = "14";
        value[5][5] = "16";
    }
    
}; // end of fillValue

void matchTemp(int &typDif, char card[][COL3])
{
    int a =0;
    int b =0;

    cout << "Matching Game" << endl;

    if(typDif == 1)
    {
       a = 4;
       b = 4;
       cout << "  |0|1|2|3" << endl;
    }
    if(typDif == 2)
    {
        a = 5;
        b = 5;
        cout << "  |0|1|2|3|4" << endl;
    }
    if(typDif == 3)
    {
        a = 6;
        b = 6;  
        cout << "  |0|1|2|3|4|5" << endl;
    }
    
    for(int row=0; row<a;row++)
    {
        cout << row << "|";
        for(int col=0;col<b;col++)
        {
            cout << card[row][col] << "|";
        }
        cout << " " << endl;
    }
    
}; //end of macthTemp

void compare(int &typDif, string value[][COL3])
{
    int row = 0;
    int col = 0;
    int row2= 0;
    int col2= 0;
    int right = 0;
    int wrong = 0;
    int win = 0;
    int loss = 0;
    
    if(typDif == 1)
    {
       win = 8;
       loss = 4;
    }
    if(typDif == 2)
    {
       win = 12;
       loss = 6;
    }
    if(typDif == 3)
    {
       win = 18;
       loss = 9;
    }

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

      }while(right != win && wrong != loss);

    if(right == win) // User gets all pairs right
    {
        cout << "You got all " << win << " matching pairs" << endl;
        cout << "CONGRATULATIONS, YOU WON!" << endl;
    }

    if(wrong == loss) // User gets four pairs wrong 
    {
        cout << "You were wrong " << loss << " times" << endl;
        cout << "GAME OVER" << endl;
    }

}; //end of void choice;
