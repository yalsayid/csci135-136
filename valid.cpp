/*
Author: Yousef Alsayid
Course: CSCI-136
Instructor: Yousef Alsayid
Assignment: Lab 1A
*/
/*
This program asks the user to input an integer in the range 0 < n < 100. If the number is out of range, the program keeps asking to re-enter until a valid number is input.

After a valid value is obtained, the program prints the number n squared.
*/

#include <iostream>
using namespace std;


int main () 
{

    int integer; 
    int n;
    cout << "Please enter an integer: ";
    cin >> integer;
    while (integer <= 0 || integer >= 100)
    {
        cout << "Please re-enter: " << endl;
        cin >> integer; 
    } 
    n = integer * integer;
    cout << "Number squared is " << n << endl;
    return 0;
}
