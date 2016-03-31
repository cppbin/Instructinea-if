/** Se citesc de la tastatura doua numere naturale
 a si b cu exact doua cifre fiecare. Afișați numarul total
 de cifre pare din cele doua numere daca ele au aceeasi paritate,
  iar daca au paritati diferite atunci afiseaza numarul total
  de cifre impare din cele doua numere.
Exemple: Daca a = 78 si b = 18 se va afisa 2 (8 si 8 sunt cifrele pare, adica 2)
Daca a = 36 si b= 55 se va afisa 3 (sunt 3 cifre impare, si anume 3, 5, 5)
**/

#include <iostream>
using namespace std;

int a, b, c1, c2, c3, c4;

int main()
{
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    c1 = a % 10;
    c2 = a / 10;
    c3 = b % 10;
    c4 = b / 10;

}
