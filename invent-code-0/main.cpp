#include <iostream>
#include <string>
using namespace std;

int main() {
    float price_per_avocado;
    float price_per_tomato;
    int price_avocado,price_tomato;
    float num_avocados;
    float num_tomatoes;

    cout << "Price of an avocado: ";
    cin >> price_per_avocado;

    cout << "Price of a tomato: ";
    cin >> price_per_tomato;

    cout << "How many avocados are in your recipe: ";
    cin >> num_avocados;
    if(num_avocados==0){
      price_avocado=0;
    }
    else{
      price_avocado=price_per_avocado;
    }

    cout << "How many tomatoes are in your recipe: ";
    cin >> num_tomatoes;
    if(num_tomatoes==0){
      price_tomato=0;
    }
    else{
      price_tomato=price_per_tomato;
    }

    float total_cost = num_avocados * price_avocado + num_tomatoes * price_tomato;
    cout << "The total cost of the recipe will be: " << total_cost << endl;
}
