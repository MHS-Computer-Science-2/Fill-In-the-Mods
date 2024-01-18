// Fill In the Mods.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // 1. Change the next line so that a is set to the remainder of 144 divided by 13
    int a = 0;
    cout << "1. The remainder of 144 divided by 13 is: " << a << endl << endl;

    //***********************************************************************************
    // 2. Add an if/else to determine whether a number entered by the user is even or odd
    //    Even numbers are multiples of 2, so when divided by 2 they have remainder 0
    int b;
    cout << "2. Enter a number to see if it is even or odd: ";
    cin >> b;
    /* add your if/else here */

    cout << b << " is EVEN" << endl << endl;

    cout << b << " is ODD" << endl << endl;
    
    
    //***********************************************************************************
    // 3. Add and if/else statement to determine whether a number entered 
    //    by the user is a multiple of both 3 and 5
    int c;
    cout << "3. Enter a number to see if it is a multiple of 3 and 5: ";
    cin >> c;
    /* add your if/else here */

    cout << c << " is a multiple of 3 and 5" << endl << endl;

    cout << c << " is NOT a multiple of 3 and 5" << endl << endl;

    //***********************************************************************************
    // 4. The following code contains a loop that displays integers from 1 to 100.
    //    Add an if statement to the loop so that only the multiples of 10 are displayed
    int number = 1;
    while(number <= 100){
       cout << number << endl;
       number = number + 1;
    }
   
    //***********************************************************************************
    // 5. Add and if/else statement to determine whether a number entered 
    //    by the user is within 1 of a multiple of 10
    //    For example:  19, 20, 21 are within 1 of a multiple of 10
    //                 but 18 and 22 are more than 1 away from a multiple of 10
    int d;
    cout << "4. Enter a number to see if it is within 1 of a multiple of 10: ";
    cin >> d;
    /* add your if/else here */

    cout << d << " is within 1 of a multiple of 10" << endl << endl;

    cout << d << " is NOT within 1 of a multiple of 10" << endl << endl;



    system("pause");
}

