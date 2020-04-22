#include <iostream>
#include <string>
using namespace std;

int main() {
  const int weight_of_boat  = 156200;
  const int max_scale_weight = 10000;

  if (weight_of_boat < max_scale_weight ) {
    cout << "The boat can be weighed.";
}
}