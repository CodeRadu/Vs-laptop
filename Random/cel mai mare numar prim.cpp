/**
3. Se citesc n numere naturale, afisati
a) numere prime( ce nu au niciun divizor propriu)
b) cel mai mare numar prim citit
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cmax=0;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        int k=0;
        for(int d=2;d<=x/2;d++)
            if(x%d==0)
                k++;
        if(k==0)
        {
             cout<<x<<" ";
             if(x>cmax)
                cmax=x;
        }
    }
    cout<<endl<<cmax;
}
