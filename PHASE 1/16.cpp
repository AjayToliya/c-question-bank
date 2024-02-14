#include <iostream>
using namespace std;

void number()
{
	int num;

    cout << "enter numbr = " ;
    cin >> num;
	
    if (num % 2 == 0){
        cout << "number is even";
	}
    else{
        cout << "number is odd";
	}
}

int main()
{
    number();

    return 0;
}
