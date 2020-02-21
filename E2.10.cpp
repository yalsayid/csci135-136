/*
Author: Yousef Alsayid
Course: CSCI-136
Instructor: Yousef Alsayid
Assignment: E2.10
*/
#include <iostream>
using namespace std;

int main() {
    double gallons;
    double fuel_efficiency;
    double price;
    cout << "Enter the number of gallons in the tank:" << endl;
    cin >> gallons;
    cout << "Enter the fuel efficency in miles per gallon:" << endl;
    cin >> fuel_efficiency;
    cout << "Enter the price of gas per gallon:" << endl;
    cin >> price;

    cout << "The cost per 100 miles is " << (100/fuel_efficiency)*price << endl;
    cout << "You can travel "<< gallons*fuel_efficiency << " miles" << endl;

} 