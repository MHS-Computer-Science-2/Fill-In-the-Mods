// Fill In the Mods.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // 1. Set a equal to the remainder of 144 divided by 13
    int a = 0;
    /* your code here */
    cout << "1. The remainder of 144 divided by 13 is: " << a << endl << endl;


    // 2. Add an if/else to determine whether a number entered by the user is even or odd
    //    Even numbers are multiples of 2, so when divided by 2 they have remainder 0
    int b;
    cout << "2. Enter a number to see if it is even or odd: ";
    cin >> b;
    /* add your if/else here */

    cout << b << " is EVEN" << endl << endl;

    cout << b << " is ODD" << endl << endl;


    // 3. Add and if/else statement to determine whether a number entered 
    //    by the user is a multiple of both 3 and 5
    int c;
    cout << "3. Enter a number to see if it is a multiple of 3 or 5: ";
    cin >> c;
    /* add your if/else here */

    cout << c << " is a multiple of 3 and 5" << endl << endl;

    cout << c << " is NOT a multiple of 3 and 5" << endl << endl;
   

    // 4. Add and if/else statement to determine whether a number entered 
    //    by the user is within 2 of a multiple of 10
    //    For example: 8, 9, 10, 11, 12 are within 2 of a multiple of 10
    //                 but 7 and 13 are more than two away from a multiple of 10
    int d;
    cout << "4. Enter a number to see if it is within 2 of a multiple of 10: ";
    cin >> d;
    /* add your if/else here */

    cout << d << " is within 2 of a multiple of 10" << endl << endl;

    cout << d << " is NOT within 2 of a multiple of 10" << endl << endl;



    system("pause");
}

