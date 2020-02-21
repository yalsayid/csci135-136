/*
Author: Yousef Alsayid
Course: CSCI-136
Instructor: Yousef Alsayid
Assignment: LAB 1B
*/
/*
This program asks the user to input three integers, and prints out the smaller of the three.
*/

#include <iostream>
using namespace std;

int main() 
{
    int x;
    int y;
    int z;
    int smallest;
    cout << "Enter a number: " << endl;
    cin >> x;
    cout << "Enter a second number: " << endl;
    cin >> y;
    cout << "Enter a third number: " << endl;
    cin >> z;

    if (x < y) {
        smallest = x;
    }
    else {
        smallest = y;
    }

    if (z < smallest) {
        smallest = z;
    }

    cout << smallest;
}