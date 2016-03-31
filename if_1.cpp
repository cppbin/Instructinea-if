/** afisati cel mai mic nr din doua date **/

#include <iostream>
using namespace std;

float a, b;

int main()
{
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    if(a < b)
        cout << a;
    else
        cout << b;
    return  0;
}
