#include<iostream>
using namespace std;

int main() {
    char i,name[100];
    int j,n;

    cout << "enter any string : ";
    cin >> name;

    int length = 0;
    while (name[length] != '\0') 
	{
        length++;
    }

    for (i='A';i<='Z';i++) 
	{
        n = 0;
        for (j = 0; j < length; j++) 
		{
            if (i == name[j]) 
			{
                n++;
            }
        }
        if (n > 0) 
		{
            cout << "'" << i << "' --> " << n << endl;
        }
    }

    for (char i = 'a'; i <= 'z'; i++) 
	{
        n = 0;
        for (j = 0; j < length; j++) 
		{
            if (i == name[j]) 
			{
                n++;
            }
        }
        if (n > 0) 
		{
            cout << "'" << i << "' --> " << n << endl;
        }
    }

    return 0;
}

