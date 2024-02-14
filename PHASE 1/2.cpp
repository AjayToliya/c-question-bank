#include <iostream>
using namespace std;

class Multiplication{
	protected :
		float a,b,c,ans;
		
	public :
		mul(){
			cout << "Enter a : ";
		    cin >> a;
		    cout << "Enter b : ";
		    cin >> b;
		    cout << "Enter c : ";
		    cin >> c;
		    
		    ans=a*b*c;
		    cout<< "Multiplication of three number is = "<<ans;
		}	
};

int main()
{
    Multiplication m;
    
    m.mul();
    
    return 0;
}
