#include<iostream>
using namespace std;

int Quotient(int x, int y)
{
    return x / y ;
}

int Remainder(int x, int y)
{
    return x%y;
}

int main()
{
    int a,b;

    cout << "Enter a = " ;
    cin >>a;
    cout << "Enter b = " ;
    cin >>b;

    cout<<"quotient = " << Quotient(a,b) << endl; 
    cout<< "remainder = "<<Remainder(a,b);

    return 0;
}
