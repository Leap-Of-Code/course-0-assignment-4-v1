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

   int sum = first + second;
   int product = first * second;
   int quotient = first / second;
   int difference = first - second;

  cout << "The sum is: " << sum << endl;
  cout << "The product is: " << product << endl;
  cout << "The quotient is: " << quotient << endl;
  cout << "The difference is: "<< difference << endl;
}
