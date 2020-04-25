#include <iostream>
#include <string>
using namespace std;

int main() {
    float price_per_avocado;
    float price_per_tomato;
    float price_per_onion;
    float num_avocados;
    float num_tomatoes;
    float num_onions;

    cout << "How many avocados are in your recipe: ";
    cin >> num_avocados;
    cout << "How many tomatoes are in your recipe: ";
    cin >> num_tomatoes;
    cout << "How many onions are in your recipe: ";
    cin >> num_onions;

    if (num_avocados > 0){
      cout << "Price of an avocado: ";
      cin >> price_per_avocado;
    }
    else {
      price_per_avocado = 0;
    }

    if (num_tomatoes > 0){
      cout << "Price of a tomato: ";
      cin >> price_per_tomato;
    }
    else{
      price_per_tomato = 0;
    }

    if (num_onions > 0){
      cout << "Price of an onion: ";
      cin >> price_per_onion;
    }
    else {
      price_per_onion = 0;
    }


    float total_cost = num_avocados * price_per_avocado + num_tomatoes * price_per_tomato + num_onions * price_per_onion;
    cout << "The total cost of the recipe will be: " << total_cost << endl;
}
