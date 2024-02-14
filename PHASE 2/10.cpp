#include <iostream>
using namespace std;

int main()
{
    float amount, inter, bill,gst;
    
    cout<<"enter your bill amount: ";
    cin>>amount;
    cout<<"enter rate of interest: ";
    cin>>inter;

    gst = (amount * inter) / 100;
    bill = amount + gst;

    cout<<"gst amount ="<<gst<<endl;
    cout<<"total bill ="<<bill;
    
    return 0;
}

