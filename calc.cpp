/*
Author: Yousef Alsayid
Course: CSCI-135
Instructor: Yousef Alsayid
*/

/*Assignment: Project 1B
*/

/* This program makes a simple calculator. */

#include <iostream>
using namespace std;

int main()
{
    char c;
    int first_num = 0;
    int next_num = 0;

    cin >> first_num; 
    while (cin >> c) {
        if (c == '+') 
        {
        cin >> next_num;
        first_num += next_num; 
        
        }

        else {
        if (c == '-') 
        cin >> next_num;
        first_num -= next_num;
        }
    }
    cout << first_num; 
    return 0;

}