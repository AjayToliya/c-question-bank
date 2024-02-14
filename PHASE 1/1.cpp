#include <iostream>
using namespace std;

class Cube{
	private:
	    float number;
	
	public:
	    cube()
	    {
	        cout << "Enter Number To Convert Cube : ";
	        cin >> this->number;
	    
	        cout << "Cude of nummber = " << number*number*number;
	    }
};

int main()
{
    Cube num;

    num.cube();

    return 0;
}
