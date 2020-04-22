#include <iostream>
#include <string>
using namespace std;

int main() {
  const string first_name = "John";
  const string last_name = "Smith";
  bool add_last_name = true;
  if (add_last_name) {
    cout << first_name << " " << last_name;
  }
}
