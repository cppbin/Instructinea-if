#include <iostream>
#include <math.h>
using namespace std;
float x,F;
int main ()
{
    cout << "x="; cin >> x;
    if(x<1)
        F=x*x*x-2*x+5;
    else if(x>=1 && x <=5)
        F=2*x-sqrt(x+1);
    else
        F=(x+1)/(x*x-1);
    cout << "F=" <<F;
    return 0;
}
