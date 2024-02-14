#include<iostream>
using namespace std;

void Reverse(int num)
{
    int rev = 0;
    int temp;

    while (num > 0)
    {
        temp = num % 10;
        rev = rev * 10 + temp;
        num =num / 10;
    }

    cout << "Reverse number is = " << rev;
    
}

int main()
{
	int num;
	
	cout<<"enter the number = ";
	cin>>num;
	
    Reverse(num);

    return 0;
}
