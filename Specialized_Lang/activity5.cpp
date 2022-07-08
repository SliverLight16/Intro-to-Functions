#include <iostream>
using namespace std;

float HeightMeas(int heightFt, int heightIn) {
   float cmPerInch;
   int InchesToFt;
   int TotalInches;
   float heightCm;
   
   cmPerInch = 2.54;
   InchesToFt = 12;
   
   //Total Inches
   TotalInches = (heightFt * InchesToFt) + heightIn;
   
   // Convert In to Cm
   heightCm = TotalInches * cmPerInch;

   return heightCm;
}

int main() {
   int userFt;
   int userIn;
   
   cin >> userFt;
   cin >> userIn;
   cout << HeightMeas(userFt, userIn);
}