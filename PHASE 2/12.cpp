#include<iostream>
using namespace std;


int main ()
{
	int hour=0,minute=0,sec;

	cout<<"enter the seconds = ";
	cin>>sec;

    while(sec>=60)
	{
		sec=sec-60;
		minute++;
	}
	
	while(minute>=60)
	{
		minute=minute-60;
		hour++;
	}


    cout << hour << " : " << minute << " : " << sec << endl ;
    return 0;
}
