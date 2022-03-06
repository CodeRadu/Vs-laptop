#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <climits>
using namespace std;
//  😀👍 ⚠️
// @Titus

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

int nrmax(int v[],int n)
{
    int maxi=INT_MIN;
    for(int i=1;i<=n;i++)
        {if(v[i]>maxi && v[i]%10==7)
           maxi=v[i];
        }

   return maxi;
}

int main()
{
    int n, v[1001];
    Citire_Vector_Unidimensional(n, v);

    cout << "a)" << endl;
    int k = 1;

    for (int i = 0; i < n - 2; i++)
    {

        if (Prim_Slow(v[i]))
        {
            if (Prim_Slow(v[i + 1]))
            {
                if (Prim_Slow(v[i + 2]))
                {
                    cout << "DA";
                    k--;
                }
            }
        }

        if (k)
        {
            cout << "NU";
        }
    }


    cout << "b)" << endl;
    cout << nrmax(v,n) << endl;
    
}