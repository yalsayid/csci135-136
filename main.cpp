/*
Author: Daniel Tchonkadze
Course: CSCI-136
Instructor: Prof. Maryash
Assignment: Project 1C

Here, briefly, at least in one or a few sentences
describe what the program does.
blah
*/
#include <iostream>
using namespace std;

int main() {
  char operators;
  char prevOp = '+';
  int numbers = 0;
  int sum = 0;

  cin >> numbers;

  while (cin >> operators) {
    if (operators == '^') {
      numbers = (numbers * numbers);
      cin >> operators;
    }
    
    if (prevOp == '+') {
      sum += numbers;
    }

    else if (prevOp == '-') {
      sum -= numbers; 
    }

    prevOp = operators;
    cin >> numbers;

    if (prevOp == ';') {
      cout << sum << endl;
      sum = 0;
      prevOp = '+';
    }
  }
  
  return 0;
}