#include <iostream>
using namespace std;

int Factotial(int number)
{
    int temp = 1,i;

    for(i=number;i>=1;i--)
    {
        temp =temp * i;
    }
    
    cout << "factorial number is = " << temp ;
    
    return 0;
}

int main()
{
    int num;

    cout << "enter number = ";
    cin >> num;

	Factotial(num)

    return 0;
}
