#include <iostream>
#include <string>
using namespace std;

int main() {
  int operation = 0;
  cout << "How many calculations would you like to do? ";
  cin >> operation;

  while (operation < 4) {
  cout << "Enter a number: ";
  int first;
  cin >> first;

  cout << "Enter an operator: ";
  char symbol;
  cin >> symbol;

  cout << "Enter a number: ";
  int second;
  cin >> second;

 int sum_numbers = first + second;
 int product_numbers = first * second;
 int quotient_numbers = first / second;
 int difference_numbers = first - second;
 int modulo_numbers = first % second;

  if (symbol == '*') {
    cout << first << " * " << second << " = " << product_numbers << endl;
  }
  else if (symbol == '+') {
    cout << first << " + " << second << " = " << sum_numbers << endl;
  }
  else if (symbol == '-') {
    cout << first << " - " << second << " = " << difference_numbers << endl;
  }
  else if (symbol == '/') {
    cout << first << " / " << second << " = " << quotient_numbers << endl;
  }
  else {
    cout << first << " % " << second << " = " << modulo_numbers << endl;
  }
  operation++;
  }
}
