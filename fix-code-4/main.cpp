#include <iostream>
#include <string>
using namespace std;

int main() {
  const float water_bottle_capacity  =1.3;
  const float amount_of_water = .7;
  if (water_bottle_capacity * 0.5 < amount_of_water){
    const string message = "The water bottle is more than half full.";
    cout << message;
  }
}