#include <iostream>
using namespace std;

void PrintPizzaArea(float pizzaDiameter, float pizzaHeight) {
   float piVal;
   float pizzaRadius;
   float pizzaArea;
   float pizzaVolume;

    piVal = 3.14159265;
    pizzaRadius = pizzaDiameter / 2.0;
    pizzaArea = piVal * pizzaRadius * pizzaRadius;
    pizzaVolume = pizzaArea * pizzaHeight;

    cout << pizzaDiameter << " x " << pizzaHeight << " inch pizza is " << pizzaVolume << " cubic inches.\n";
}

int main() {
    PrintPizzaArea(12.0, 0.3);
    PrintPizzaArea(12.0, 0.8);
    PrintPizzaArea(16.0, 0.8);
}