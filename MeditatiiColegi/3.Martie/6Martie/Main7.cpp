#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");

void citire(int v[], int n)
{
    for (int i = 1; i <= n; i++)
        fin >> v[i];
}

void afisare(int v[], int n)
{
    for (int i = 1; i <= n; i++)
        fout << v[i] << " ";
}

void ordo_desc(int v[], int n)
{
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[i] < v[j] && v[i] % 2 == 1 && v[j] % 2 == 1)
                swap(v[i], v[j]);
}

int nrdediv(int x)
{
    int y = 2;
    for (int i = 2; i <= x / 2; i++)
        if (x % i == 0)
            y++;
    return y;
}

int main()
{
    int n, v[101];
    fin >> n;
    citire(v, n);
    for (int i = 1; i <= n; i++)
    {
        if (v[i] < 0)
            v[i] = 100;
    }
    fout << "a) ";
    afisare(v, n);
    int k[101] ;

    for (int i = 1; i <= n ; i++) {
        k[i] = v[i];
    }
    ordo_desc(v, n);

    fout << endl;

    fout << "b) ";

    afisare(v, n);



    fout << endl;
    int p = nrdediv(k[n]);
    int c = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        if (nrdediv(k[i]) == p && k[i] != 1)
            c++;
    }
    fout << "c) ";
    fout << c;

    return 0;
}