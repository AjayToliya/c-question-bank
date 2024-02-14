#include<iostream>
using namespace std;

void con(int inch)
{
	int feet,inches;
	
    feet = inch / 12 ;
    inches =inch % 12 ;

    cout<<"the hight is "<<feet<<" feet and "<<inches<< " inches";
}

int main()
{
    int height;

    cout << "enter height in inches = " ;
    cin >> height;

    con(height);

    return 0;
}
