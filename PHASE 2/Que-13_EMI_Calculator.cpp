#include <iostream>

using namespace std;

int main() {
    double amount, rate, time,emi;
    
   
    cout << "enter principal amount (in rs): ";
    cin >> amount;
    cout << "enter annual interest rate (in percentage): ";
    cin >> rate;
    cout << "enter time period (in years): ";
    cin >> time;

    rate = (rate/12)* 100;

    emi = amount *(rate/100)*((time*12)/100);

  
    cout << "monthly emi = " << emi << endl;

    return 0;
}

