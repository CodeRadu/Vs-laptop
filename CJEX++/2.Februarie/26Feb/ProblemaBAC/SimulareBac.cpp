#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <climits>
using namespace std;
//  😀👍 ⚠️     
ifstream fin("bac.in");
ofstream fout ("bac.out");

void Citire_Vector_Unidimensional(int &n, int  *v)
{
    fin >> n;
    for (int i = 0; i < n; ++i)
        fin >> v[i];
}

int Val_In_Interval (int v[] , int n , int a , int b) {
    int k = 0;
    for (int i = 0; i <=n; i++){
    if (v[i] >= a && v[i] <=b) k++;
}
return k;
}

int stergere_dubluri(int v[],int &n)
{
    for(int i=0;i<n-1;i++)
    {
        if(v[i]==v[i+1])
        {
            for(int j=i+1;j<=n-1;j++)
                v[j-1]=v[j];
                n--;
        }
    }
}

int main () {
    int n, v[100000],m,a,b;
    Citire_Vector_Unidimensional(n,v);  
    fin >> m;
    sort(v, v+n+1);
    stergere_dubluri(v,n);

    for (int i =1 ; i <= m ; i++) 
    {
        fin >> a  >> b;
        fout << Val_In_Interval(v, n , a , b) << endl;

    }
}


