#include <iostream>
#include <string>
using namespace std;

int main() {
  int first; 
  cout << "Enter a number: ";
  cin >> first;

  int second;
  cout << "Enter a number: ";
  cin >> second;
 
  string math_sign;
  cout << "Enter an operator: ";
  cin >> math_sign;

int answer1 = 0;

if (math_sign == "+") {
  answer1 = first + second;
  cout << "The sum is: " << answer1 << endl;
}
if (math_sign == "*") {
  answer1 = first * second;
  cout << "The product is: " << answer1 << endl;
}
if (math_sign == "%") {
  answer1 = first % second;
  cout << "The remainder is: " << answer1 << endl;
}
if (math_sign == "/") {;
  answer1 = first / second;
  cout << "The quotient is: " << answer1 << endl;
}
if (math_sign == "-") {
  answer1 = first - second;
  cout << "The difference is: "<< answer1 << endl;
}

  string math_sign_2;
  cout << "Enter an operator: ";
  cin >> math_sign_2;

int third;
  cout << "Enter a number: ";
  cin >> third;

int answer2 = 0; 

if (math_sign_2 == "+") {
  answer2 = answer1 + third; 
  cout << "The sum is: " << answer2 << endl;
}
if (math_sign_2 == "*") {
  answer2 = answer1 * third;
  cout << "The product is: " << answer2 << endl;
}
if (math_sign_2 == "%") {
  answer2 = answer1 % third;
  cout << "The remainder is: " << answer2 << endl;
}
if (math_sign_2 == "/") {
  answer2 = answer1 / third;
  cout << "The quotient is: " << answer2 << endl;
}
if (math_sign_2 == "-") {
  answer2 = answer1 - third;
  cout << "The difference is: "<< answer2 << endl;
}

string math_sign_3; 
cout << "Enter an operator: " << endl;
cin >> math_sign_3;

int fourth;
cout << "Enter a number: " << endl;
cin >> fourth; 

int answer3 = 0; 

if (math_sign_3 == "+") {
  answer3 = answer2 + fourth; 
  cout << "The sum is: " << answer3 << endl;
}
if (math_sign_3 == "*") {
  answer3 = answer2 * fourth;
  cout << "The product is: " << answer3 << endl;
}
if (math_sign_3 == "%") {
  answer3 = answer2 % fourth;
  cout << "The remainder is: " << answer3 << endl;
}
if (math_sign_3 == "/") {
  answer3 = answer2 / fourth;
  cout << "The quotient is: " << answer3 << endl;
}
if (math_sign_3 == "-") {
  answer3 = answer2 - fourth;
  cout << "The difference is: "<< answer3 << endl;
}
}
