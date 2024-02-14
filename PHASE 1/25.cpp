#include<iostream>
using namespace std;

int main(){
	int a,b,c,d;


	cout<<"enter the a =";
	cin>>a;
	cout<<"enter the b =";
	cin>>b;
	cout<<"enter the c =";
	cin>>c;
	cout<<"enter the d =";
	cin>>d;

	if(a==b && a==c && a==d )
	{
		cout<<"all are same ";
	}
	else if(a==b && b==c)
	{
		cout<<"a,b and c are same ";
	}
	else if(b==c && c==d)
	{
		cout<<"b,c and d are same ";
	}
	else if(a==b && b==d)
	{
		cout<<"a,b and d are same";
	}
	else if(a==c && a==d)
	{
		cout<<"a,c and d are same ";
	}
	else if(a==b)
	{
		cout<<"a and b are same ";
	}
	else if(a==c)
	{
		cout<<"a and c are same ";
	}
	else if(a==d)
	{
		cout<<"a and d are same ";
	}
	else if(b==c)
	{
		cout<<"b and c are same ";
	}
	else if(b==d)
	{
		cout<<"b and d are same ";
	}
	else if(c==d)
	{
		cout<<"c and d are same ";
	}

	else if(a>b)
	{
		if(a>c && a>d)
		{
			cout<<"a is max ";
		}
		else if(c>d)
		{
			cout<<"c is max ";
		}
		else
		{
			cout<<"d is max ";
		}
	}
	else if(b>c)
	{
		if(b>d)
		{
			cout<<"b is max ";
		}
		else
		{
			cout<<"d is max ";
		}
	}
	else if(c>d)
	{
		cout<<"c is max ";
	}
	else
	{
		cout<<"d is max ";
	}

}
