/*
Author: Yousef Alsayid
Course: CSCI-135
Instructor: Yousef Alsayid
*/

/*Assignment: Project 1D
*/

/* This program is a calculator that understands the squared operator. */
// This is the final task

#include <iostream>
using namespace std;

int main() {
	
	int num = 0;
    int result = 0;
	char op;
	char prev_op = '+'; 
	
	
	cin >> num;
	while (cin >> op) { 		
		if (op == '^'){			
			num = num*num;
			cin >> op;			
		}
		if (prev_op == '+') 
        {		
			result += num;
		} 
        else if (prev_op == '-')
		{
			result -= num;
		}
		prev_op = op;
		cin >> num;
		if (prev_op == ';'){
			cout << result << endl;
			result = 0;
			prev_op = '+';
		}
	}
	
	
    return 0;
}