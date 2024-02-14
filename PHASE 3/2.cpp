#include <iostream>
using namespace std;

int main() 
{
    int Size = 100;
    char str[Size];

    cout << "Enter a string: ";
    cin.getline(str, Size);

    int length = 0;
    while (str[length] != '\0') 
	{
        length++;
    }

    if (length > 3 && length < 9) 
	{
        for (int i = 0, j = length - 1; i < j; i++, j--) 
		{
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }

        cout << "Reversed string: " << str << endl;
    } 
	else 
	{

        int sum = 0;
        for (int i = 0; i < length; i++) 
		{
            sum = sum + (str[i]);
        }

        cout << "Sum of ASCII values: " << sum << endl;
    }

    return 0;
}

