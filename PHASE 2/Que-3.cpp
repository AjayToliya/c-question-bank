#include <iostream>
using namespace std;

void Find_Answer(float num)
{
	float ans;
	
    ans = (2 * (num - 3)) / ((4 * num) - 1);

    cout << ans << endl;
}

int main()
{
    Find_Answer(2.5);

    return 0;
}
