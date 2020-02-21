/*
Author: Yousef Alsayid
Course: CSCI-136
Instructor: Yousef Alsayid
Assignment: Lab 2B
*/
/*
This program asks the user to input two integers L and U (representing the lower and upper limits of the 
interval), and prints out all integers in the range L ≤ i < U separated by spaces. 
*/

#include <iostream>
using namespace std;

int main () {
    int L;
    int U;
    cout << "Please enter L: " << endl;
    cin >> L;
    cout << "Please enter U: " << endl;
    cin >> U;

    for (int i = L; i < U; i++) {
        cout << i << " ";
    }
    return 0;
    }