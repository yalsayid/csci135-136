/*
Author: Yousef Alsayid
Course: CSCI-136
Instructor: Yousef Alsayid
Assignment: Quiz 2
*/
/*
This program asks the user to input two inout integers, and prints out the smaller of the two.
*/

#include <iostream>
using namespace std;

int main() 
{
    int numone;
    int numtwo;
    cout << "Enter any number: " << endl;
    cin >> numone;
    cout << "Enter a second number: " << endl;
    cin >> numtwo;

    if (numone > numtwo)
    {
        cout << numone << endl;
    }
   if (numone < numtwo)
    {
        cout << numtwo << endl;
    }

}