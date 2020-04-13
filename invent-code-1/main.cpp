#include <iostream>
#include <string>
using namespace std;

int main() {
  int answer_1 = 0;
  int answer_2 = 0;
  int answer_3 = 0;
  cout << "Enter first number: ";
  int first;
  cin >> first;

  cout << "Enter first operator: ";
  char operator1;
  cin >> operator1;

  cout << "Enter second number: ";
  int second;
  cin >> second;

  if (operator1 =='+') {
    answer_1 = first + second;
  }
  if (operator1 == '-') {
    answer_1 = first - second;
  }

  if (operator1 == '*') {
    answer_1 = first * second;
  }

  if (operator1 == '/' && second != 0) {
    answer_1 = first / second;
  }
  if (operator1 == '%') {
    answer_1 = first % second;
  }  
  
  if (operator1 == '/' && second == 0) {
    cout << first << operator1 << second << "=" << "indivisible" << endl;
  }
  else
    cout << first << operator1 << second << "=" << answer_1 << endl;

  cout << "Enter second operator: ";
  char operator2;
  cin >> operator2;
  
  cout << "Enter third number: ";
  int third;
  cin >> third;

  if (operator2 =='+') {
    answer_2 = answer_1 + third;
  }
  if (operator2 == '-') {
    answer_2 = answer_1 - third;
  }

  if (operator2 == '*') {
    answer_2 = answer_1 * third;
  }

  if (operator2 == '/' && third != 0) {
    answer_2 = answer_1 / third;
  }

  if (operator2 == '%') {
    answer_2 = answer_1 % third;
  }  
  
  if (operator2 == '/' && third == 0) {
    cout << answer_1 << operator2 << third << "=" << "indivisible" << endl;
  }
  else
  cout << answer_1 << operator2 << third << "=" << answer_2 << endl;
  
  cout << "Enter third operator: ";
  char operator3;
  cin >> operator3;
  
  cout << "Enter fourth number: ";
  int fourth;
  cin >> fourth;

  if (operator3 =='+') {
    answer_3 = answer_2 + fourth;
  }
  if (operator3 == '-') {
    answer_3 = answer_2 - fourth;
  }

  if (operator3 == '*') {
    answer_3 = answer_2 * fourth;
  }

  if (operator3 == '/' && third != 0) {
    answer_3 = answer_2 / fourth;
  }

  if (operator3 == '%') {
    answer_3 = answer_2 % fourth;
  } 

  if (operator3 == '/' && third == 0) {
    cout << answer_2 << operator3 << fourth << "=" << "indivisible" << endl;
  }
  else 
  cout << answer_2 << operator3 << fourth << "=" << answer_3 << endl;

}

