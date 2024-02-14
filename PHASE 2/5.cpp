#include <iostream>
using namespace std;

int main()
{
    float math, phy, chem;

    cout<<"enter math marks = ";
    cin>>math;
    cout<<"enter physics marks: ";
    cin >> phy;
    cout << "enter chemistry marks: ";
    cin >> chem;

    if (math >= 80 && phy >= 75 && chem >= 72)
	{
        cout << "student grade A";
    }
	else if ((math >= 60 && math < 80) && (phy >= 55 && phy < 75) && (chem >= 50 && chem < 72))
	{
        cout << "student grade B";
    }
	else if((math >= 40 && math < 60) && (phy >= 35 && phy < 55) && (chem >= 35 && chem < 50))
	{
        cout << "student grade C";
    }
	else
	{
        cout << "student fail sorry";
    }

    return 0;
}

