#include<iostream>
using namespace std;

class Avg {
    private:
        float a,b,c,avg;

    public:
        Avg(){
            cout << "enter first number = " ;
            cin >> this->a ;
            cout << "enter Second number = " ;
            cin >> this->b ;
            cout << "enter third number = " ;
            cin >> this->c ;
            
            avg =a+b+c/3
        }
        getAvg(){
            cout << "Avradge is = " << avg;
        }
};

int main(){

    Avg number;

    number.getAvg();
    
    return 0;
}
