/*
Author: Yousef Alsayid
Course: CSCI-135
Instructor: Yousef Alsayid
Assignment: E4.8
*/

#include <iostream>
using namespace std;

int main() {
    string str("HELLO");

    cout << "Please enter a word: " << endl;
    cin >> str;


    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i];
    }
    
    return 0;
}