#include <iostream>
using namespace std;

a(){
	char a;

    cout << "enter a character: ";
    cin >> a;

    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') 
    {
        cout << a << " is a vowel";
    } 
    else {
        cout<< a <<" is a consonant";
    }

    return 0;
}

int main() 
{
    a();
    
    return 0;
}
