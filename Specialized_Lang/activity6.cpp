#include <iostream>
using namespace std;

float CircleArea(float circleDiameter) {
   float piVal;
   float circleRadius;
   float circleArea;

   piVal = 3.14159265;
   circleRadius = circleDiameter / 2.0;
   circleArea = piVal * circleRadius * circleRadius;

   return circleArea;
}

float PizzaCals(float pizzaDiameter ) {
   float calsPerSqIn;
   float totalCals;

   calsPerSqIn = 16.7;
   totalCals = CircleArea(pizzaDiameter) * calsPerSqIn;

   return totalCals;
}
   
int main() {
    float pizzaDiameter;

    cin >> pizzaDiameter;
    cout << pizzaDiameter << " inch pizza has " << PizzaCals(pizzaDiameter) << " calories.\n";
   
}

