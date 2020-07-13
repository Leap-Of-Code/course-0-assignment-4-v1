#include <iostream>
#include <string>
using namespace std;

int main() {
  int num_cats = 0;
  cout << "Enter the number of cats :";
  cin >> num_cats;

  int num_mice = 5;

  if (num_cats > 0) {
    // Every 2 cats eats one mouse, rounded down.
    num_mice = num_mice - 1;
  }

  if (num_mice > num_cats) {
    // If there are as many mice as cats left over, the cat population increases by 1.
    num_cats = num_cats + 1;
  }
  cout << "The number of mice left is: " << num_mice;
}
