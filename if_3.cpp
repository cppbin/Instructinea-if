#include <iostream>
using namespace std;

int p1, p2;

int main()
{
    cout << "p1 = "; cin >> p1;
    cout << "p2 = "; cin >> p2;
    if(p2 > p1)
        cout << p2 << "  " << p1;
    else
        cout << p1 << "  " << p2;
    return 0;
}
