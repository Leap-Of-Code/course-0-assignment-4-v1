#include <iostream>
#include <string>
using namespace std;

int main() {
  const float weight_of_boat  = 156200;
  const float max_scale_weight = 10000;

  if (weight_of_boat > max_scale_weight ) {
    cout << "The boat can be weighed.";
  }
}
