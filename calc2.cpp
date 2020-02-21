/*
Author: Yousef Alsayid
Course: CSCI-135
Instructor: Yousef Alsayid
*/

/*Assignment: Project 1C
*/

/* This program makes a more adcanced calculator. */
/* It accepts more than one equation. */

#include <iostream>
using namespace std;

int main() {
	int num;
	char c;
	bool solved = false;
	cin >> num;
	int result = num;
	while (cin >> c >> num) { 
		
		solved = false;
		if (c == ';') {
			cout << result << endl;
			solved = true;
			result = num;
		}
		if (!solved) {			
			if (c == '+'){
				result += num;
				solved = true;
			} else if (c == '-'){
				result -= num;
				solved = true;
			}
		}
	}

	if (solved) {
		cout << result << endl;
	}
return 0;

}
