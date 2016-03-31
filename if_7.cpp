#include <iostream>
using namespace std;

int x, E;

int main()
{
    cout << "x = "; cin >> x;
    if(x == 0 || x == 1)
        E = x + 1;
    if(x == 2 || x == 3)
        E = x + 2;
    if(x >= 4)
        E = x + 3;
    cout << "E =" << E;
    return 0;
}
