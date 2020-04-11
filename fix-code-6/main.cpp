#include <iostream>
#include <string>
using namespace std;

int main() {
  int num_cats = 0;
  cout << "How many cats are there: ";
  cin >> num_cats;

  // Adding a copy of cats since we don't want to change the actual value of cats. Mice reduces b/c cats are eating them but the vaue of num_cats shouldn't change. 
  int num_cats_copy = num_cats;
  int num_mice = 5;

  while ((num_cats_copy > 0) && (num_mice > 0)) {
    // Every 2 cats eats one mouse, rounded down.
    if (num_cats_copy % 2 == 0) {
    num_mice--;
    }
    num_cats_copy--;
  }

  if (num_mice == num_cats) {
    // If there are as many mice as cats left over, the cat population increases by 1.
    num_cats++;
  }
  //num_mice--;
  cout << "The number of mice left is: " << num_mice;
}
