#include<iostream>
using namespace std;

void table(int num)
{
    for(int i=1 ; i <=10 ; i++)
    {
        cout << num << " X " << i << " = " << num * i << endl;
    }
}

int main()
{
    int num ;
    cout << "Enter Table Number : " ;
    cin >> num ;

    table(num) ;

    return 0;
}
