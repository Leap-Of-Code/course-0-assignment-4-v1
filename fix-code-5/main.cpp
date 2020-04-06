#include <iostream>
#include <string>
using namespace std;

int main() {
  const string first_name = "John";
  bool add_last_name = true;
  if (add_last_name) {
    string last_name = "Smith";
  }

  cout << first_name << " " << last_name;
}
