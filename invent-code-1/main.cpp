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
    const int total1 = first + second;
    cout << "The sum is: " << total1 << endl;
  }
  if (op == "*"){
    const int total1 = first * second;
    cout << "The product is: " << total1 << endl;
  }
  if (op == "/"){
    const int total1 = first / second;
    cout << "The quotient is: " << total1 << endl;
  }
  if (op == "-"){
    const int total1 = first - second;
    cout << "The difference is: "<< total1 << endl;
  }
}
