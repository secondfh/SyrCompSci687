//Greg Boehler
//CSE687 Object Oriented Design
//Syracuse University
//Test Harness
//5/15/21
#include <vector>
#include <iostream>
#include "Test.h"
#include "Exception.h"
#include "TestExecution.h"



//grab specific namespace library features
using std::cout;
using std::cin;
using std::string;


int main()
{
    //declare variables

    int choice = 0;
    bool result;
    string exception;
    int count = 0;

    //declare derived classes
    Test tc01{}, tc02{}, tc03{};
    tc01.setResult(false);
    tc02.setResult(true);
    tc03.setResult(false);
    
    Exception exc{};

    //build vector of base class pointers that calls derived class objects



    //welcome banner for program
    cout << "#################################################\n";
    cout << "#                                               #\n";
    cout << "#      Welcome to the CSE687 Test Harness       #\n";
    cout << "#                                               #\n";
    cout << "#################################################\n\n";

    while (choice >= 0) //program runs unless user wants to exit early
    {
        //user picks their character type
        cout << "Please select a Test Case to execute. Select 0 to run all tests (enter -1 to quit)\n";
        cout << "[0] All Tests\n";
        cout << "[1] Test Case 01\n";
        cout << "[2] Test Case 02\n";
        cout << "[3] Test Case 03 \n";

        cin >> choice;

        switch (choice)//character selection attributes are displayed
        {
        case 0:
            result = tc01.passed();
            if (result == true)
            {
                cout << "TEST CASE 01 PASSED\n";
            }
            else
            {
                cout << "TEST CASE 01 *FAILED*\n";
                count++;
            }
            result = tc02.passed();
            if (result == true)
            {
                cout << "TEST CASE 02 PASSED\n";
            }
            else
            {
                cout << "TEST CASE 02 *FAILED*\n";
                count++;
            }
            //tc03
            cout << exc.getMessage() << "\n\n";
            
            if (count == 0)
            {
                cout << "ALL TESTS PASSED\n";
            }
            else
            {
                cout << "\nOVERALL TEST *FAILED*\n\n";
            }
            break;
        case 1:
            result = tc01.passed();
            if (result == true)
            {
                cout << "\nTEST CASE 01 PASSED\n\n";
            }
            else
            {
                cout << "\nTEST CASE 01 *FAILED*\n\n";
            }
            break;
        case 2:
            result = tc02.passed();
            if (result == true)
            {
                cout << "\nTEST CASE 02 PASSED\n\n";
            }
            else
            {
                cout << "\nTEST CASE 02 *FAILED*\n\n";
            }
            break;
        case 3:
            cout << exc.getMessage() << "\n\n";
            break;

        default: //default to run all tests
            result = tc01.passed();
            if (result == true)
            {
                cout << "TEST CASE 01 PASSED\n";
            }
            else
            {
                cout << "TEST CASE 01 *FAILED*\n";
                count++;
            }
            result = tc02.passed();
            if (result == true)
            {
                cout << "TEST CASE 02 PASSED\n";
            }
            else
            {
                cout << "TEST CASE 02 *FAILED*\n";
                count++;
            }
            //tc03
            cout << exc.getMessage() << "\n\n";

            if (count == 0)
            {
                cout << "ALL TESTS PASSED\n";
            }
            else
            {
                cout << "\nOVERALL TEST *FAILED*\n\n";
            }
            break;
        }


    }

}
