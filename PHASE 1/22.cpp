#include<iostream>
using namespace std;

void Fibonacci(int n)
{
    int f=0,s=1,temp;
    
    cout <<f<<" "<<s<<" ";

    for(int i = 2; i < n; i++)
    {
        temp = f + s;
        cout << temp << " ";
        f = s;
        s = temp;
    }
}

int main()
{
	int num;
	
	cout<<"enter the number = ";
	cin>>num;
	
    Fibonacci(num);

    return 0;
}
