#include<iostream>
using namespace std;

int Digits(int num)
{
    int temp = 0 ;

    while(num>0)
    {
        num /= 10 ;
        temp++;
    }
	cout << "digits in number is = " << temp;
    return temp ;
}

int main()
{
	int num;
	
	cout<<"enter the number = ";
	cin>>num;
	
    Digits(num);

    return 0;
}
