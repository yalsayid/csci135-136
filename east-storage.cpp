/*
Author: Yousef Alsayid
Course: CSCI-136
Instructor: Yousef Alsayid
Assignment: Lab 3A
*/
/*
This program asks the user to input a string representing the date (in MM/DD/YYYY format), and prints out the East basin storage on that day.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main () {
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail())
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); 
    }

    string junk;        
    getline(fin, junk);

    string date;
    double eastSt;
    double eastEl;
    double westSt;
    double westEl;


    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        fin.ignore(INT_MAX, '\n'); 
        cout << "Please enter a date (in MM/DD/YYYY format):" << endl;
        cin >> date;

        getline(fin,date);
        
        cout << "East basin storage: " << eastSt << " billion gallons" << endl;
        
        
        fin.close();
    }


}