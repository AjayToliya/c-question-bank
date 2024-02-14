#include<iostream>
using namespace std;

int interest (float p, float r , float n)
{
	int i;

	i=( p * r* n ) / 100 ;
	
	cout<<" interest is = "<<i<<endl;
	
	cout<<"interest with amount is = "<<i+p;
    return 0;
}

int main()
{
    float p, r, n ;

    cout << "Enter amount = " ;
    cin >> p ; 
    cout << "Enter rate of interest = " ;
    cin >> r ; 
    cout << "Enter number of years = " ;
    cin >> n ; 

    interest(p, r, n);
    
    return 0;
}
