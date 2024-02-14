#include<iostream>
using namespace std;

int main(){
	
	int a,b,c,d=0;
	
	cout<<"enter the number=";
	cin>>a;
	
	b=a;
	while(b>0)
	{
		c=b%10;
		d=d*10+c;
		b=b/10;
	}

	if(d==a)
	{
		cout<<"the number is palindrome";
	}
	else{
		cout<<"the number is not palindrome";
	}
	
	return 0;
}




