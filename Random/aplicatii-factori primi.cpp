/**
Se citeste un numar natural X cu cel mult 8 cifre.
Afisati:
a) numarul factorilor primi din descompunerea sa, care apar la putere impara
b) cea mai mare putere la care apare un factor
Exemple:
X=120
a) 3 factori
b) 3 (corespunde lui 2 la puterea 3)
*/
#include <iostream>
using namespace std;
int main()
{
    int nr;
    cin>>nr;
    int factor=2;
    int putere=0;
    int k=0;
    int max=-1;
    while(nr>1)
    {
        while(nr%factor==0)
        {
            nr=nr/factor;
            putere++;
        }
        if(putere%2==1)
            k++;
        if(putere>max)
            max=putere;

        putere=0;
        factor++;
    }
    cout<<"a)nr factorilor cu putere impara este:"<<k;
    cout<<endl<<"b)cea mai mare putere la care apare un factor:"<<max;
}
