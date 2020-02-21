/*
Author: Yousef Alsayid
Course: CSCI-136
Instructor: Yousef Alsayid
Assignment: Quiz 3
*/
/*
This program makes an array and prints each number on a seperate line.
*/


#include <iostream>
using namespace std;

int main()
{
int array [10]; // integer array of size 10 is declared
array[0] = 1;
array[1] = 2;
array[2] = 3;
array[3] = 4;
array[4] = 5;
array[5] = 6;
array[6] = 7;
array[7] = 8;
array[8] = 9;
array[9] = 10;

for(int i =0; i<10;i++)
{
cout << array[i] << "\n";
}
return 0;
}