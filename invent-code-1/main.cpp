#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int first;
  cin >> first;

  cout << "Enter a number: ";
  int second;
  cin >> second;

  cout << "Enter an operator: ";
  char op;
  cin >> op;

  const int sum = first + second;
  const int product = first * second;
  const int quotient = first / second;
  const int difference = first - second;

  if (op == '+') {
  cout << "The sum is: " << sum << endl;
  }
  if (op == '*') {
  cout << "The product is: " << product << endl;
  }
  if (op == '/') {
  cout << "The quotient is: " << quotient << endl;
  }
  if (op == '-') {
  cout << "The difference is: "<< difference << endl;
  }
}
