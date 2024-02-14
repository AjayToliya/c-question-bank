#include<iostream>
using namespace std;

void student()
{
    char a;
    cout << "Enter Character Here : " ;
    cin >> a ;

    if(a>='a' && a<='z'){
    	cout << "character is lowercase" << endl;
	}
        
    else if(a>='A' && a<='Z'){
    	cout << "character is uppercase" << endl ;
	}
        
    else if(a>='0' && a<='9'){
        cout << "character is number" << endl ;
	}
	
    else {
        cout << "character is special character" << endl ;
	}
}

int main()
{
    student();
    
    return 0;
}
