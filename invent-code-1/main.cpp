#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int first;
  cin >> first;

  cout << "Enter a number: ";
  const int second;
  cin >> second;

  const int sum = first + second;
  const int product = first * second;
  const int quotient = first / second;
  const int difference = first - second;

  cout << "The sum is: " << sum << endl
  cout << "The product is: " << product << endl;
  cout << "The quotient is: " << quotient << endl;
  cout << "The difference is: "<< difference << endl;
}
