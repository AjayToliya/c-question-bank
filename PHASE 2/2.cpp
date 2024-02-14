#include <iostream>
using namespace std;

int main()
{
    int n, sum, avg ,i,a=0;

    cout<<"enter the number = ";
    cin>>n;

    for (i=1;i<=n;i++)
    {
        if (i%2==0)
        {
            sum=sum+i;
            a++;
        }
    }
	avg=sum/a;
    cout << "average = " <<avg;
}
