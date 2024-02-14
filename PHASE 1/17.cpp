#include <iostream>
using namespace std;

prime(){
	int a,b,c=0;
    
	cout<<"Enter any number = ";
	cin>>b;

	for (a = 2; a <= b/2; a++)
    {
	    if(b%a == 0)
	    {
			c++;
	    }
    }

    if(c == 0 && b != 1 ){
		cout<<"Prime number";
    }
    else{
		cout<<"not prime number";
    }
}

int main()
{
    prime();

    return 0;
}
