/*
Se citeste un nr x Sa se verifice daca este simetric fata de minjloc (palindrom)
*/
#include <iostream>
using namespace std;
int Oglindit(int k)
{
    int ogli = 0;
    while (k)
    {
        ogli = ogli * 10 + k % 10;
        k /= 10;
    }
    return ogli;
}

int Verif_Palindrom (int n) {
    if (n == Oglindit(n)) return 1;
    return 0;
}

int main () {
    int n; 
    cin >> n;
    if (Verif_Palindrom(n)) cout << "Palindrom";
    else cout << " NU e palindrom";
}
