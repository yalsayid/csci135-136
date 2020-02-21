/*
Author: Yousef Alsayid
Course: CSCI-136
Instructor: Yousef Alsayid
Assignment: Lab 2D
*/
/*
This program uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).
*/

#include <iostream>
using namespace std;

int main () {
    int fib[60];

    fib[0] = 0;
    fib[1] = 1;
    int i;

    cout << fib[0] << endl;
    cout << fib[1] << endl;

for (int i=2; i<60; i++)
{
    fib[i] = fib[i-1] + fib[i-2];
    cout << fib[i];
    cout << endl;
}
   
return 0;

}