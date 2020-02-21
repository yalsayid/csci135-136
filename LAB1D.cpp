/*
Author: Yousef Alsayid
Course: CSCI-136
Instructor: Yousef Alsayid
Assignment: LAB 1D
*/
/*
This program asks the user to input the year and the month (1-12) and prints the number of days in that month (taking into account leap years).
*/

#include <iostream>
using namespace std;

int main () {
    int year;
    int month;
    cout << "Enter the month (as an integer): " << endl;
    cin >> month;
    cout << "Enter the year: " << endl;
    cin >> year;

    if (month % 2 != 0) {
        cout << "31" << endl;
    }

    else {
        cout << "30" << endl;
    }

    return 0;

}