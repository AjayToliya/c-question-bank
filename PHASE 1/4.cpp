#include<iostream>
using namespace std;

int main()
{
    string first,second,temp;

    cout << "first student name = " ;
    cin >> first ;
    cout << "second student name = " ;
    cin >> second ;
	
    temp = first ;
    first = second ;
    second = temp ;

    cout << "first student name = " << first<< endl 
	cout<< "second student name = " << second;

    return 0;
}
