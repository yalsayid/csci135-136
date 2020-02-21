/*
Author: Yousef Alsayid
Course: CSCI-136
Instructor: Yousef Alsayid
Assignment: LAB 1C
*/
/*
This program asks the user for a year, and prints whether it is a leap year or a common year.
*/

#include <iostream>
using namespace std;

int main () {
    int year;
    cout << "Enter a year: " << endl;
    cin >> year;

    if (year % 4 != 0) {
        cout << "common year" << endl;
    }

    else if (year % 100 != 0) {
        cout << "leap year" << endl;
    }

    else if (year % 400 !=0) {
        cout << "common year" << endl;
    }

    else {
        cout << "leap year" << endl;
    }

    return 0;
}