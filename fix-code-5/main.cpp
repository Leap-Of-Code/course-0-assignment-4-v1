#include <iostream>
#include <string>
using namespace std;

int main() {
  const string first_name = "John";
  bool add_last_name = true;
  string last_name = "Smith";
  if (add_last_name) { 
    cout << first_name << " " << last_name;
  }
}
