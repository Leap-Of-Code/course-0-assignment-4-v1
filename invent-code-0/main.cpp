#include <iostream>
#include <string>
using namespace std;

int main() {
    float price_per_avocado = 0;
    float price_per_tomato = 0;
    float num_avocados;
    float num_tomatoes;

    cout << "How many avocados are in your recipe: ";
    cin >> num_avocados;
    if (num_avocados > 0) {
    cout << "What is the price of an avocado: ";
    cin >> price_per_avocado;
    }
    
    cout << "How many tomatoes are in your recipe: ";
    cin >> num_tomatoes;
    if (num_tomatoes > 0) {
    cout << "Price of a tomato: ";
    cin >> price_per_tomato;
    }

    float total_cost = (num_avocados * price_per_avocado) + (num_tomatoes * price_per_tomato);
    cout << "The total cost of the recipe will be: " << total_cost << endl;
}
