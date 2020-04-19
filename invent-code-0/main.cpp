#include <iostream>
#include <string>
using namespace std;

int main() {
    float price_per_avocado = 0;
    float price_per_tomato = 0;
    float price_per_onions = 0;
    float num_avocados = 0;
    float num_tomatoes = 0;
    float num_onions = 0;

    cout << "How many avocados are in your recipe: ";
    cin >> num_avocados;

   if (num_avocados > 0) {
      cout << "Price of an avocado: ";
      cin >> price_per_avocado;
    }

    cout << "How many tomatoes are in your recipe: ";
    cin >> num_tomatoes;

    if (num_tomatoes > 0) {
      cout << "Price of a tomato: ";
      cin >> price_per_tomato;
    }

    cout << "How many onions are in your recipe: ";
    cin >> num_onions;

    if (num_onions > 0) {
      cout << "Price of a onion: ";
      cin >> price_per_onions;
    }
   
    float total_cost = num_avocados * price_per_avocado + num_tomatoes * price_per_tomato + num_onions * price_per_onions;
    cout << "The total cost of the recipe will be: " << total_cost << endl;
}
