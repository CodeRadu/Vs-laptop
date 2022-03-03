#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
using namespace std;
//  😀👍 ⚠️

/*
Se citeste un vector sa se afiseze
1. Vecorul in ordine crescatoare

2. Vecorul in oridne descrescatoare

3. Sa se odoneze vectorul astfel :
numerele pare sa fie in ordine crescatoare
numerele impare sa fie in ordine descrescatoare

4.Afișați în ordine crescătoare valorile prime din vector.

5. Se citeste un nr k . Sa se afiseze vectorul in ordine cresatore pana la pozitia k si in odine
descresatoare pana la final

6.  Sa se afiseze vectorul in ordine cresatore pana la cea mai mare valoare din vector si in odine
descresatoare pana la final
*/

int Ordonare_Vector_Uni_Crescator(int v[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
}

int Ordonare_Vector_Uni_DesCrescator(int v[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (v[i] < v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
}

int Ordonare_Vector_Uni_Crescator_pt_prim(int v[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            /// 5 6 7 8 9 11 3
            /// 3 6 7 8 9 11 5
            /// 3 6 7 8 9 11 5
            /// 3 6 5 8 9 11 7
            /// 3 6 5 8 9 7 11
            if (Prim_Slow(v[i]) && Prim_Slow(v[j]))
            {

                if (v[i] < v[j])
                {
                    swap(v[i], v[j]);
                }
            }
        }
    }
}

int Ordonare_Vector_Uni_Crescator_Pt_Pare_Si_invers_impare(int v[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (v[i] % 2 == 0 && v[j] % 2 == 0)
            {
                if (v[i] > v[j])
                {
                    swap(v[i], v[j]);
                }
            }

            if (v[i] % 2 == 1 && v[j] % 2 == 1)
            {

                if (v[i] < v[j])
                {
                    swap(v[i], v[j]);
                }
            }
        }
    }
}

int Prim_Slow(int k)
{
    int d = 2;
    for (int i = 2; i <= k / 2; i++)
    {
        if (k % i == 0)
            d++;
    }

    if (d == 2)
        return 1;

    return 0;
}

int main()
{
    int n, v[100] = {10, 4, 2, 7, 12, 10002};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // cin >> v[i];
    }

    Ordonare_Vector_Uni_Crescator(v, n);

    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }

    Ordonare_Vector_Uni_DesCrescator(v, n);

    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }
}
