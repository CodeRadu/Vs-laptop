#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <climits>
using namespace std;
//  😀👍 ⚠️   
// @Titus  


void Inserare_In_Vector_Unidimensional_la_Punctul_k(int v[], int &marime, int k, int numarx)
{
    for (int i = marime; i >= k; i--)
    {
        v[i + 1] = v[i];
    }
    v[k] = numarx;
    marime++;
}


void Stergere_In_Vector_Unidimensional_la_Punctul_k(int v[], int &marime, int k)
{
    int i;
    if (k <= marime)
    {
        for (i = k; i <= marime - 1; i++)
        {
            v[i] = v[i + 1];
        }
        marime--;
    }
}

void Citire_Vector_Unidimensional(int &n, int x[])
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> x[i];
}

void Afisare_Vector_Unidimensional(int n, int x[])
{

    for (int i = 0; i < n; ++i)
        cout << x[i] << " ";
}

int main () {
    int n[] = { 1 ,2 , 3 ,4 , 5 , 6 , 7 ,8 , 9 , 10};
    int m = 10;
    Afisare_Vector_Unidimensional(10, n);
    cout << endl;

    Stergere_In_Vector_Unidimensional_la_Punctul_k(n, m , 1);

    Afisare_Vector_Unidimensional(m, n);
    cout << endl;

    Inserare_In_Vector_Unidimensional_la_Punctul_k(n, m , 2, 2);
    Afisare_Vector_Unidimensional(m, n);
    cout << endl;
}