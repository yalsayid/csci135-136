/*
Author: Yousef Alsayid
Course: CSCI-136
Instructor: Yousef Alsayid
Assignment: Project 1A
*/
/*
This program reads a sequence of integers from cin, and reports their sum.
*/

#include <iostream>
using namespace std;
int main () {
    int n, sum = 0;
    while (cin >> n) {
        sum = n + sum;
        n++;
    }
    cout << "Sum = " << sum;
    return 0;
    }
    

