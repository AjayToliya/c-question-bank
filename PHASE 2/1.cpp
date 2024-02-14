#include <iostream>

using namespace std;

void table(int n1, int n2) {
    
    int i,j;
    
    for (i=n1;i<=n2;i++)
	{
        for(j=1;j<=10;j++)
		{
            cout<<i<<" * "<<j<<" = "<<i*j<<endl;
        }
        cout << endl; 
    }
}

int main() {
    int n1, n2;
    
    cout << "Enter the starting value: ";
    cin >> n1;
    cout << "Enter the ending value: ";
    cin >> n2;

    table(n1, n2);

    return 0;
}

