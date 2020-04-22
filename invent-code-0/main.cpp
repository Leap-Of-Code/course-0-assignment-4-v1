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

    cout << "Price of an avocado: ";
    cin >> price_per_avocado;

    cout << "Price of a tomato: ";
    cin >> price_per_tomato;

    cout << "Price of an onion ";
    cin >> price_per_onion;

    cout << "How many avocados are in your recipe: ";
    cin >> num_avocados;

    cout << "How many tomatoes are in your recipe: ";
    cin >> num_tomatoes;

    cout << "How many onions are in your recipe: ";
    cin >> num_onions; 
  
float cost_of_avocados = 0;
float cost_of_tomatoes = 0; 
float cost_of_onions = 0;

if (num_avocados > 0) { 
  cost_of_avocados = num_avocados * price_per_avocado;
}
if (num_tomatoes > 0) { 
  cost_of_tomatoes = num_tomatoes * price_per_tomato; 
}
if (num_onions > 0) {
  cost_of_onions = num_onions * price_per_onion;
}
float total_cost = cost_of_avocados + cost_of_tomatoes + cost_of_onions;
cout << "The total cost of the recipe will be: " << total_cost << endl; 

}
