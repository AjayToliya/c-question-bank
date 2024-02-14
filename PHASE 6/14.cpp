#include <iostream>
using namespace std;

int main() {
    double unitRate; 
    double unitsConsumed;
    double billAmount; 

    cout << "Enter the rate per unit: ";
    cin >> unitRate;

    cout << "Enter the total units consumed: ";
    cin >> unitsConsumed;

    billAmount = unitRate * unitsConsumed;

   
    cout << "Electricity Bill: $" << billAmount << endl;

    return 0;
}

