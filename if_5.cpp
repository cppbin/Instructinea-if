#include <iostream>
using namespace std;
int a,b,maxim,minim;
int main ()
{
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    if (a<=b)
    {
        minim=a;
        maxim=b;
    }
    cout << minim * 3 << " " << maxim * 2;
    return 0;
}
