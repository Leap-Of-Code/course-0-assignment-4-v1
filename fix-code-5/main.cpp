#include <iostream>
#include <string>
using namespace std;

int main() {
  string first_name = "John";
  string last_name;
  bool add_last_name = true;

  if (add_last_name) {
    last_name = "Smith";
  }
  cout << first_name << " " << last_name;

}
