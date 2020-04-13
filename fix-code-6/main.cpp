#include <iostream>
#include <string>
using namespace std;

int main() {
  int num_cats = 0;
  cout << "How many cats are there: ";
  cin >> num_cats;

  int num_mice = 5;

  if (num_cats > 10) {
    cout << "Not enough mice for the cat"; 
  }
  else if (num_cats < 0) {
    cout << "Please input a positive number of cats";
  }
    return 0;
  
  if (num_cats > 0 && num_cats % 2 != 0) {
    // Every 2 cats eats one mouse, rounded down.
    num_mice = 5 - 0.5 * num_cats + 1;
  }
  else if (num_cats > 0 && num_cats % 2 == 0) {
    num_mice = 5 - 0.5 * num_cats;
  }
  cout << "The number of mice left is:" << " " << num_mice;
}
 


