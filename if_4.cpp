#include <iostream>
using namespace std;
int a,b,c,S3,S2;
int main ()
{
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;
    S3=a + b + c;
    cout << endl << "S2="; cin >> S2;
    cout << "Numarul ramas este " <<S3-S2;
    return 0;
}
