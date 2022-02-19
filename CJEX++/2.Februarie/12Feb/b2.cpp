/**
 * @file b2.cpp
 * afisare numar in baza 2
 * :)
 */
#include <iostream>
using namespace std;
int main()
{
    int n, v[100],i = 1;
    cin >> n;
    while (n)
    {
        i++;
        v[i] == n % 2;
        n = n / 2;
    }
}