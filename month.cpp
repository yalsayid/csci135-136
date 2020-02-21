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

int main ()
{
    int year;
    cout << "Enter year:\n";
    cin >> year;
    
    int month;
    cout << "Enter month:\n";
    cin >> month;
    
    //31
    if (month == 1)
        cout << "31 days\n";
    else if (month ==3)
        cout << "31 days\n";
    else if (month ==5)
        cout << "31 days\n";
    else if (month ==7)
        cout << "31 days\n";
    else if (month==8)
        cout << "31 days\n";
    else if (month==10)
        cout << "31 days\n";
    else if (month ==12)
        cout << "31 days\n";
    
    //30
    else if (month== 4)
        cout << "30 days\n";
    else if (month == 6)
        cout << "30 days\n";
    else if (month ==9)
        cout << "30 days\n";
    else if (month == 11)
        cout << "30 days\n";
    
    else if (month ==2)
    {
        if (year % 4 != 0)
            cout << "28 days\n";
        else if (year % 100 != 0)
            cout << "29 days\n";
        else if (year % 400 != 0)
            cout << "28 days";
        else
            cout << "29 days";
    }
    return 0;

}
