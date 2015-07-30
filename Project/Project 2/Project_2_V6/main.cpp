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
const int ROW3 = 6; // #3 = max rows for easy, medium, hard
                    // #6 = max array from easy (4x4) to medium (5x5) to hard (6x6)
const int COL3 = 6; // #3 = max columns for easy, medium, hard
                    // #6 = max array from easy (4x4) to medium (5x5) to hard (6x6)

// Function Prototypes
void intro();           // Introduction of game
void mode(int &typDif); // Player's choice of: 1)Easy 2)Medium 3)Hard
void introE();          // Introduction to Easy (type of difficulty)
void introM();          // Introduction to Medium (type of difficulty)
void introH();          // Introduction to Hard (type of difficulty)
void fillCard(int &typDif, char card[][COL3]);     // Filling card with 'X' 
                                                   // depending on level of difficulty
void fillValue(int &typDif, string value[][COL3]); // Filled given values of cards 
                                                   // depending on level of difficulty
                                                   // but does not appear to player
void matchTemp(int &typDif, char card[][COL3]);    // Matching Game Template depending 
                                                   // on level of difficulty: 
                                                   // naming rows & columns and 
                                                   // seperating it with '|'
void compare(int &typDif, string value[][COL3]);   // Comparing CARD VALUE 1 &
                                                   //           CARD VALUE 2
                                                   // whether it be a win or loss

// Execution Begins Here
int main(int argc, char** argv) {

    // Code Goes Here
    // Declare Variables    
    int typDif = 0;           // Type of difficulty: Easy, Medium, Hard
    char card[ROW3][COL3];    // #3 = max of given level of difficulty
                              // Creates card array depending on difficulty
                              // Number of cards will be given and showed
    string value[ROW3][COL3]; // #3 = max of given level of difficulty
                              // Creates card array depending on difficulty
                              // Values given, need match
    string answer;            // Yes or yes: if user decides to play again

    START1:  // Player brought here if wish to play again
    intro(); // Start the introduction

    START:        // Player is brought here if number input is not in range
                  // of difficulty: 1)Easy 2)Medium 3)Hard
    mode(typDif); // Select Difficulty
    
    if (typDif >= 1 && typDif <= 3) // Choose from difficulty 1-3
    {   
        switch(typDif)              // Depending on difficulty chosen, 
                                    // player will play an amount of cards 
        {
            case 1: introE();

                    fillCard(typDif,card);   // Card Values are replaced with 'X'      
                    fillValue(typDif,value); // Values given to Cards but not shown
                    matchTemp(typDif,card);  // Naming rows & columns and
                                             // seperating it with '|'
                    compare(typDif,value);   // Compare CARD VALUE 1 & CARD VALUE 2
                    break;

            case 2: introM();
                    fillCard(typDif,card);   // Card Values are replaced with 'X'
                    fillValue(typDif,value); // Values given to Cards but not shown 
                    matchTemp(typDif,card);  // Naming rows & columns and
                                             // seperating it with '|'
                    compare(typDif,value);   // Compare CARD VALUE 1 & CARD VALUE 2                                          
                    break;

            case 3: introH();
                    fillCard(typDif,card);   // Card Values are replaced with 'X'
                    fillValue(typDif,value); // Values given to Cards but not shown
                    matchTemp(typDif,card);  // Naming rows & columns and
                                             // seperating it with '|'
                    compare(typDif,value);   // Compare CARD VALUE 1 & CARD VALUE 2
                    break;
        }

            
        cout << "Would you like to play again?" << endl;
        cout << "If yes, please enter 'YES' or 'yes' (followed by the enter key)." << endl;
        cout << "If no, please enter 'NO' or 'no' or any other word or letter";
        cout << " or number (follwed by the enter key)." << endl;
        cin >> answer;
      
        if (answer == "YES" || answer == "yes") // If player chooses to play again
        {
            goto START1; // Send back player to introduction
        }

        else if (answer != "YES" || answer != "yes") // If player chooses not to continue 
                                                // playing
        {
            cout << "Thank you for playing!" << endl;
        }
    }

    else if (typDif < 1 || typDif > 3) // Number chosen out of range from 1-3 
                                       // difficulty
    {
        cout << "ERROR!" <<endl;
        cout << "That is not a number between 1-3" <<endl <<endl;
        goto START; // Send player back to choosing a level of difficulty from 1-3
    }

    // Exit Stage Right
    return 0;
} // End of program

void intro() // Introduction
{
    cout << "Matching Game" <<endl;
    cout << "Welcome!" <<endl;
    cout << "This is a game about MEMORY and MATCHING a set of cards." <<endl;
    cout << "You choose the type of difficulty you would want to play." <<endl;
    cout << "Depending on the difficulty you choose," <<endl;
    cout << "it is up to you to match by memory." <<endl;
    cout << "Good Luck!" <<endl <<endl;
}; // End of void intro()

void mode(int &typDif) // Mode = Level of difficulty player chooses: E/M/H
{
    cout << "What type of difficulty would you like?" <<endl;
    cout << "1) Easy" <<endl;
    cout << "2) Meduim" <<endl;
    cout << "3) Hard" <<endl;
    cout << "Choose from 1-3 in order of difficulty." <<endl;
    cout << "Please enter the number only" <<endl;
    cin >> typDif;
    cout << " " <<endl;
}; // End of void mode()

void introE() // Introduction to Easy (level of difficulty)
{
    cout << "Type of difficulty choosen: EASY" <<endl;
    cout << "In EASY mode you will have no more than 16 cards";
    cout << " which you will have to find 8 pairs to match." <<endl;
    cout << "You will be given 4 chances";
    cout << " before a GAME OVER is declared." <<endl;
}; // End of void introE()

void introM() // Introduction to Medium (level of difficulty)
{
    cout << "Type of difficulty choosen: MEDIUM" <<endl;
    cout << "In MEDIUM mode you will have no more than 25 cards";
    cout << " which you will have to find 12 pairs to match" <<endl;
    cout << "Notice that there is a card that has no pair?" <<endl;    
    cout << "Well if you happen to choose or pair,"; 
    cout << " the game will automayically be a GAME OVER." <<endl;
    cout << "You will be given 6 chances";
    cout << " before a GAME OVER is declared." <<endl;
}; // End of void introM()

void introH() // Introduction to Hard (level of difficulty)
{
    cout << "Type of difficulty choosen: HARD" <<endl;
    cout << "In HARD mode you will have no more than 36 cards";
    cout << " which you will have to find 18 pairs to match" <<endl;
    cout << "You will be given 9 chances";
    cout << " before a GAME OVER is declared." <<endl;
}; // End of void introH()

void fillCard(int &typDif, char card[][COL3]) // Filling card with 'X' depending 
                                              // on level of difficulty
{
    int r =0; // Row
    int c =0; // Column

    if(typDif == 1) // Easy
    { 
       r = 4; // 4x4
       c = 4;
    }
    if(typDif == 2) // Medium
    {
        r = 5; //5x5
        c = 5;
    }
    else if(typDif == 3) // Hard
    {
        r = 6; // 6x6
        c = 6; 
    }

    // Add 'X' in place of values of cards in rows and columns (2D array)
    for(int row=0; row<r; row++) 
    {
        for(int col=0; col<c; col++)
        {
            card[row][col] = 'X'; 
        }
    }
}; // End of void fillCard()

void fillValue(int &typDif, string value[][COL3]) // Filled given values of cards 
                                                  // depending on level of difficulty
                                                  // but does not appear to player
{
    if(typDif == 1) // Values of cards for EASY
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

    if(typDif == 2) // Values of cards for Medium
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
    else if(typDif == 3) // Values of cards for HARD
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
    
}; // End of void fillValue()

void matchTemp(int &typDif, char card[][COL3]) // Matching Game Template depending 
                                               // on level of difficulty: 
                                               // naming rows & columns and 
                                               // seperating it with '|'
{
    int r =0; // Row
    int c =0; // Column

    if(typDif == 1) //Easy
    {
       r = 4; // 4x4
       c = 4;
       cout << "  |0|1|2|3" << endl; // ROW x COLUMN
    }

    if(typDif == 2) // Medium
    {
       r = 5; // 5x5
       c = 5;
       cout << "  |0|1|2|3|4" << endl; // ROW x COLUMN
    }
    else if(typDif == 3) // HARD
    {
       r = 6;// 6x6
       c = 6;  
       cout << "  |0|1|2|3|4|5" << endl; // ROW x COLUMN
    }
    
    // '|' to seperate Row and Columns and Cards
    for(int row=0; row<r;row++) // Rows 
    {
        cout << row << "|"; 

        for(int col=0;col<c;col++) // Columns
        {
            cout << card[row][col] << "|";
        }

        cout << " " << endl;
    }
    
}; // End of void matchTemp()

void compare(int &typDif, string value[][COL3]) // Comparing CARD VALUE 1 &
                                                //           CARD VALUE 2
                                                // whether it be a win or loss
{
    int row = 0; // Value card 1 row
    int col = 0; // Value card 1 column
    int row2= 0; // Value card 2 row2
    int col2= 0; // Value card 2 column2
    int right = 0; // Number of right matches that will add up
    int wrong = 0; // Number of wrong unmatches that will add up
    int win = 0;   // Limit by level of difficulty,
                   // until number of pairs matched is reached, win is declared
    int loss = 0;  // Limit by level of difficulty,
                   // until number of pairs unmatched is reached, loss is declared 
    
    if(typDif == 1) // Easy
    {
       win = 8;  // Number of pairs to match  
       loss = 4; // Number of pairs not matched 
    }

    if(typDif == 2) // Medium
    {
       win = 12; // Number of pairs to match 
       loss = 6; // Number of pairs not matched
    }

    else if(typDif == 3) // Hard
    {
       win = 18; // Number of pairs to match
       loss = 9; // Number of pairs not matched
    }

    do{
        cout << "FIRST CHOICE" << endl; // Choice one
        cout << "row: ";
        cin >> row;
        cout << "column: ";
        cin >> col;

        cout << "SECOND CHOICE" << endl; // Choice two
        cout << "row: ";
        cin >> row2;
        cout << "column: ";
        cin >> col2;
        cout << " " << endl;

        cout << "Card 1 value: " <<value[row][col]<< endl;
        cout << "Card 2 value: " <<value[row2][col2]<< endl;

        if (value[row][col] == value[row2][col2]) // Card values match 
        {
            cout << "MATCH!" << endl;
            right++;
            cout << "# of right times: " << right << endl << endl;
        }

        else if (value[row][col]!= value[row2][col2]) // Card values don't match
        {
            cout << "This is not a match, TRY AGAIN" << endl;
            wrong++;
            cout << "# of wrong times: " << wrong << endl << endl;
        }

      }while(right != win && wrong != loss);

    if(right == win) // User gets all pairs right, wins 
    {
        cout << "You got all " << win << " matching pairs" << endl;
        cout << "CONGRATULATIONS, YOU WON!" << endl;
    }

    if(wrong == loss) // User gets number of pairs wrong
                      // depending on level of difficulty, looses
    {
        cout << "You were wrong " << loss << " times" << endl;
        cout << "GAME OVER" << endl;
    }

}; // End of void compare()
