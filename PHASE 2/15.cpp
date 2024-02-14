#include <iostream>
using namespace std;

int main() {
    int w = 32;
    int h = 52;
    int margin = 10;

    int wid = w + 2 * margin;
    int hei = h + 2 * margin;

    cout << "required space is " << wid << " by " << hei << "inche";

    return 0;
}
