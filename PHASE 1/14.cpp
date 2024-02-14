#include <iostream>
using namespace std;

void year()
{
    int year ;

    cout << "enter the year = ";
    cin >> year ;

    if (year%4==0)
        cout << "year is leap year";
    else
        cout << "year is not leaap year";
}

int main()
{
    year();
    
    return 0;
}
