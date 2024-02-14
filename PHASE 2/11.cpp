#include <iostream>
using namespace std;

int main() {
    char choice;
    float t;

    while (choice != '3')
	{
        cout << "1 convert celsius to fahrenheit" << endl;
        cout << "2 convert fahrenheit to celsius" << endl;
        cout << "3 exit" << endl;
        	
        cout << "enter your choice (1-3):";
        cin >> choice;

        switch (choice)
		{
            case '1':
                cout << "enter temperature in celsius = ";
                cin >> t;
                cout << "temperature in fahrenheit = " << (t * 9 / 5) + 32 << "°f" << endl;
                break;
                
            case '2':
                cout << "enter temperature in fahrenheit = ";
                cin >> t;
                cout << "temperature in celsius = " << (t - 32) * 5 / 9 << "°c" << endl;
                break;
                
            case '3':
                cout << "exiting" <<endl;
                break;
                
            default:
                cout << "invalid choice" << endl;
        }

    } 

    return 0;
}

