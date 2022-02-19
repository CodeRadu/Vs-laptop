#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
ifstream fin("numere.in");
ofstream fout("numere.out");
int main()
{
    int frec[20]={0};
    unsigned long long nr;
    int k;
    while(fin>>nr)
    {
        k++;
        while(nr%10==0)
        {
            nr=nr/10;
            k++;
        }
        frec[k]++;
    }
    int maxi=0;
    for(int i=0;i<=19;i++)///nr maxim de aparitii al unei puteri
    {
        if(frec[i]>maxi)
            maxi=frec[i];
    }
    for(int i=0;i<=19;i++)
    {
        if(frec[i]==maxi)
            if(frec[i]==maxi)
                fout<<i<<" ";
    }
    fout<<'\n';
    ///cerinta b)
    for(int i=19;i>=10;i--)
    {
        if(frec[i]==0)
        {
            fout<<i<<'\n';
            break;
        }

    }
}
