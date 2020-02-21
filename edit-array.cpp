/*
Author: Yousef Alsayid
Course: CSCI-136
Instructor: Yousef Alsayid
Assignment: Lab 2C
*/
/*
This program creates an array of 10 integers, and provides the user with an interface to edit any of its elements.
*/

#include <iostream>
using namespace std;

int main () {
    int myData[10];
    int i;
    int v;

    for (int i = 0; i < 10; i++) {
        myData[i] = 1;
        cout << myData[i] << " ";
    }
    
    do {
        cout << endl;
        cout << "Enter i: " << endl;
        cin >> i;
        cout << "Enter v: " << endl;
        cin >> v;

        if (i >= 0 && i < 10) {
            myData[i] = v;
            cout << endl;

            for (int i2=0; i2 < 10; i2++) {
                cout << myData[i2] << " "; 
            }
        }
    }
        
        while (i >= 0 && i < 10);
    
    cout << "I is out of range. Exit.";

    return 0;
}


