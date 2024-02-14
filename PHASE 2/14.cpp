#include <iostream>
using namespace std;

int main()
{
    double income,tax;

    cout << "Enter your income = ";
    cin >> income;

    if (income <= 100000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = (income - 100000) * 0.05;
    }
    else if (income <= 1000000)
    {
        tax = 20000 + (income - 500000) * 0.1;
    }
    else{
        tax = 70000 + (income - 1000000) * 0.15;
    }

    cout << "income tax = " << tax << endl;

    return 0;
}
