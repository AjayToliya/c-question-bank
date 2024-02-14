#include<iostream>
using namespace std;

void Days(int days) {
	
	int year ,month ,day;
	
    year = days / 365;
    
	day = days-(year*365);

    month = day / 30;
    
    day =day - (month*30);

    cout << "Years = " << year << endl;
    cout << "Months = " << month << endl;
    cout << "Days = " << day;

}
int main() {
    int totalDays;
    
    cout << "enter total days = ";
    cin >> totalDays;

    Days(totalDays);

    return 0;
}
