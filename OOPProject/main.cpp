//Greg Boehler
//CSE687 Object Oriented Design
//Syracuse University
//Test Harness
//5/15/21
#include <vector>
#include <iostream>
#include "Test.h"


//grab specific namespace library features
using std::cout;
using std::cin;
using std::string;


int main()
{
    //declare variables
    string name = "";
    int choice = 0;
    int attk = 0;
    int pain = 0;
    bool enemies = true;
    //declare derived classes

    //build vector of base class pointers that calls derived class objects


    //welcome banner for program
    cout << "#################################################\n";
    cout << "#                                               #\n";
    cout << "#      Welcome to the CSE687 Test Harness       #\n";
    cout << "#                                               #\n";
    cout << "#################################################\n\n";

    while(choice >= 0) //program runs unless user wants to exit early
    {
        //user picks their character type
        cout << "Please select a Test Case to execute. Select 0 (enter -1 to quit)\n";
        cout << "[0] All Tests\n";
        cout << "[1] Test Case 01\n";
        cout << "[2] Test Case 02\n";
        cout << "[3] Test Case 03 \n";
        
        cin >> choice;

        switch (choice)//character selection attributes are displayed
        {
        case 0:
            //run all tests
            //cout the results
            break;
        case 1:
            //run specific test
            //cout result
            break;
        case 2:
            //run specific test
            //cout result
            break;
        case 3:
            //run specific test
            //cout result
            break;
        default: //default to run all tests
            //run all tests
            //cout the results
            break;
        }
        

    }

}
