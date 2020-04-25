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
  string op;
  cin >> op;

  if (op == "+"){
    const int sum = first + second;
    cout << "The sum is: " << sum << endl;
  }
  if (op == "*"){
    const int product = first * second;
    cout << "The product is: " << product << endl;
  }
  if (op == "/"){
    const int quotient = first / second;
    cout << "The quotient is: " << quotient << endl;
  }
  if (op == "-"){
    const int difference = first - second;
    cout << "The difference is: "<< difference << endl;
  }
}
