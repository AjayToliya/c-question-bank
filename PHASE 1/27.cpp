#include<iostream>  
using namespace std;

void sum(int num)
{
    int temp=0,i;

    while (num <=0)
    {
        i = num % 10 ;
        temp += i ;
        num /= 10 ;    
    }

    cout << "sum of all digit is = " << temp;
    
}

int main()
{
	int num;
	
	cout<<"enter the number";
	cin >>num;
	
    sum(num);
    return 0;
}
