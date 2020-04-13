#include <iostream>
#include <string>
using namespace std;

int main() {
    float price_per_avocado = 0;
    float price_per_tomato = 0;
    float price_per_onion = 0;
    float num_avocados = 0;
    float num_tomatoes = 0;
    float num_onion = 0;

    cout << "How many avocados are in your recipe: ";
    cin >> num_avocados;

    cout << "How many tomatoes are in your recipe: ";
    cin >> num_tomatoes; 

    cout << "How many onions are in your recipe: ";
    cin >> num_onion; 
    
    if (num_avocados > 0) {
      cout << "Price of an avocado: ";
      cin >> price_per_avocado;
    }

    if (num_tomatoes > 0) {
      cout << "Price of a tomato: ";
      cin >> price_per_tomato;
    }
    
     if (num_onion > 0) {
      cout << "Price of a onion: ";
      cin >> price_per_onion;
    }

    float total_cost = num_avocados * price_per_avocado + num_tomatoes * price_per_tomato + num_onion * price_per_onion;
    cout << "The total cost of the recipe will be: " << total_cost << endl;
}
