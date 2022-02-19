/**
1. Se citesc n numere naturale cu cel mult 15 cifre.
a)Calculati media aritmetica a numerelor prime
b) Afisati cel mai mare numar PALINDROM citit.
exemple:
8
31
3849506070700
121
3
183945056060
666666666666666
1
0
*/
#include <iostream>
using namespace std;
int main()
{
    long long n,x;
    cin>>n;
    int k;
    long long s=0;
    int j=0;
    long long d;
    long long maxi=-1;
    long long copiex;
    long long ogli;
    int cifra;
    for(int i=1; i<=n; i++)
    {

        cin>>x;
       copiex=x;
        ogli=0;
        ///verificam daca x e prim ca sa putem calcula media aritmetica
        k=0;
        for( d=2; d<=x/2; d++)
        {
            if(x%d==0)
                k++;
        }
        if(k==0)///nr este prim
        {
            j++;
            s=s+x;
        }
        ///////////////////////////////////////
        ///verificam daca x e palindrom
        while(x)
        {
            cifra=x%10;
            ogli=ogli*10+cifra;
            x=x/10;
        }
        if(ogli==copiex)///e palindrom
            if(ogli>maxi)
                maxi=ogli;
    }
    if(j==0)
        cout<<"nu avem nr prime";
    else
        cout<<(float)s/j;
    cout<<endl;
    cout<<"Cel mai mare nr palindrom este "<<maxi;
}
