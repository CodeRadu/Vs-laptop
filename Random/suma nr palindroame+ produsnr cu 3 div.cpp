/**
Se citesc n numere naturale, calculati:
a) suma numerelor palindroame
b) produsul numerelor care au exact 3 divizori
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s=0;
    long long p=1;
    for(int i=1;i<=n;i++)
    {
        long long x;
        cin>>x;
        int k=0;
        long long copie=x;
        long long invers=0;
        while(x)
        {
           invers=invers*10+x%10;
           x=x/10;
        }
        if(copie==invers)
        {
             s=s+invers;
        }
        for(int d=2;d<=copie/2;d++)
            if(copie%d==0)
            k++;
        if(k==1)
            p=p*copie;
    }
    cout<<s<<endl;
    cout<<p;

}
