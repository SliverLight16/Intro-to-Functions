#include <iostream>
using namespace std;

void PrintPizzaArea(float pizzaDiameter) {
   float piVal;
   float pizzaRadius;
   float pizzaArea;

    piVal = 3.14159265;
    pizzaRadius = pizzaDiameter / 2.0;
    pizzaArea = piVal * pizzaRadius * pizzaRadius;

    cout << pizzaDiameter << " in. pizza is " << pizzaArea << " sq in.\n";
}

int main() {
    PrintPizzaArea(12.0);
    PrintPizzaArea(16.0);
}