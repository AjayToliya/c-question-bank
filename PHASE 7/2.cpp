#include<iostream>
using namespace std;

int main()
{
	int a,b,choice,i;
	
	while(choice!=6)
	{
		cout<<"1 for +"<<endl;
		cout<<"2 for -"<<endl;
		cout<<"3 for *"<<endl;
		cout<<"4 for /"<<endl;
		cout<<"5 for %"<<endl;
		cout<<"6 for exit"<<endl;
		
			cout<<"enter your choice = ";
			cin>>choice;
			
			if(choice==6)
			{
				break;
			}
			else if(choice>6)
			{
				cout<<"enter valid number = ";
			}
			
			cout<<"enter the a = ";
			cin>>a;
			cout<<"Enter the b = ";
			cin>>b;
			
			switch(choice)
			{
				case 1:
					cout<<"Addition="<<a+b<<endl;
					break;
					
				case 2:
					cout<<"Subtraction="<<a-b<<endl;
					break;
					
				case 3:
					cout<<"Multiplication="<<a*b<<endl;
					break;
					
				case 4:
					cout<<"Division="<<a/b<<endl;
					break;
					
				case 5:
					cout<<"Module="<<a%b<<endl;
					break;	
					
				default:
					cout<<"wrong choice";					
			}
	}
	return 0;
}


