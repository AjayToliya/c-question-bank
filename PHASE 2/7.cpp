#include <iostream>
using namespace std;

float circle(float radius)
{
    return 3.14*radius*radius;
}

float perimeter(float radius)
{
    return 2*3.14*radius;
}

float diameter(float radius)
{
    return 2*radius;
}

int main() {
    
    int choice;
    float radius;

    while (choice!=4)
    {
        cout<<"1.calculate area"<<endl;
        cout<<"2.calculate perimeter"<<endl;
        cout<<"3.convert radius to diameter"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter your choice=";
        cin>>choice;

        switch (choice) {
            case 1:
                cout<<"enter the radius of the circle=";
                cin>>radius;
                cout<<"area of the circle="<<circle(radius)<<endl;
                break;

            case 2:
                cout<<"enter the radius of the circle=";
                cin>>radius;
                cout<<"perimeter of the circle="<<perimeter(radius)<<endl;
                break;

            case 3:
                cout<<"enter the radius of the circle=";
                cin>>radius;
                cout<<"diameter of the circle="<<diameter(radius)<<endl;
                break;

            case 4:
                cout<<"exiting calculator"<<endl;
                break;

            default:
                cout<<"invalid choice"<<endl;
        }
    }

    return 0;
}

