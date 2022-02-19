/**
 * @file b2.cpp
 * afisare numar in baza 2
 * 
 * cerinte suplimentare
 *  cati biti de 1 sunt in reprezentare
 *  care este lungimea numarului in baza 2 3
 */
#include <iostream>
using namespace std;
int main()
{
    int b2[100], n = 0, i, nr,ct=0;
    cin >> nr;
    while (nr)
    {
        // cout << nr % 2 << ' ';
        b2[n++] = nr % 2;
        nr = nr / 2;
    }
    // afisarea inversa a vectorului
    for (i = n - 1; i >= 0; i--)
        cout << b2[i];


    for (i = n - 1; i >= 0; i--) {
        if (b2[i] == 1) ct ++;
    }

    cout << ct << " " << n;
}

