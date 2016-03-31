#include <iostream>
using namespace std;

int v1, v2, dif;

int main()
{
    cout << "v1 = "; cin >> v1;
    cout << "v2 = "; cin >> v2;
    if(v1 > v2)
    {
        dif = v1 - v2;
        cout << "primul copil este mai mare cu "
        << dif << " ani";
    }
    else if(v1 < v2)
    {
        dif = v2 - v1;
        cout << "al doilea copil este mai mare cu "
         << dif << " ani";
    }
    else
        cout << "copiii au aceeasi varsta";
    return 0;
}
