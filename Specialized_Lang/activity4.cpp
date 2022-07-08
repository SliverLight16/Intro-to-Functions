#include <iostream> 
using namespace std;

int ComputeSquare(int numToSquare) {
    int numSquared;
    numSquared = numToSquare * numToSquare;
    return numSquared;
}

int main() {
    int squaredVal;

    squaredVal=ComputeSquare(7);
    cout << squaredVal;
}