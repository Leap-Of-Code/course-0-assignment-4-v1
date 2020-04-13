#include <iostream>
#include <string>
using namespace std;

int main() {
  int inches_of_snow = 43;
  const bool is_snowing = false;
  if(is_snowing){
  inches_of_snow = inches_of_snow + 1;
  }
}
