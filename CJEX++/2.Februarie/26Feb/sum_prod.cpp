/**
 * scrieti o functie care calculeaza suma si produsul a 2 numere
 * NU putem scrie o functie care sa returneze ami mult de 1 rezultat
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
using namespace std;
// transmiterea parametrilor prin valoare (a,b) si prin adresa (sum, prod)
void sum_prod(int a, int b, int &sum, int &prod)
{
    sum = a + b;
    prod = a * b;
}
int main()
{
    int x, y, s, p;
    cin >> x >> y;
    sum_prod(x, y, s, p);
    cout << "suma = " << s << endl;
    cout << "prod = " << p << endl;
    return 0;
}