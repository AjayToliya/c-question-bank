#include <iostream>
using namespace std;

Armstrong(){
	int n, r, sum = 0, temp;
    
    cout << "enter the number = ";
    cin >> n;

    temp = n;

    while (n>0)
    {
        r = n % 10;
        sum =sum+ (r * r * r);
        n = n / 10;
    }

    if (temp == sum){
        cout << "Armstrong number." << endl;
	}
    else{
        cout << "Not armstrong number." << endl;
	}
}

int main()
{
    Armstrong();
    
    return 0;
}
