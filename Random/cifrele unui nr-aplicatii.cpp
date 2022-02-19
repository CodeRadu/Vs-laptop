/**
/////////////////////////
1.	Se citeste x un numar natural cu cel mult 15 cifre. Afisati
a)	Numarul obtinut din x dupa eliminarea cifrelor de pe pozitii pare(pozitiile se numeroteaza de la dreapta la stanga incepand cu 0)
b)	Verificati daca numarul obtinut la a) este palindrom
Exemplu: x=14937633640
a) 14937633640   43634
b) Da este palindrom
/////////////////////////
#include <iostream>
using namespace std;
int main()
{
    long long n,p=0,y=0;
    cin>>n;
    while(n)
    {
        int cifra=n%10;
        if(p%2!=0)
            y=y*10+cifra;
        p++;
        n=n/10;
    }
    cout<<"a) "<<y<<endl;
    int oglindit=0,copie=y;
    while(y)
    {
        oglindit=oglindit*10+y%10;
        y=y/10;
    }
    if(copie==oglindit)cout<<"da este palindrom";
    else cout<<"nu este palindrom";
}
*/

/////////////////////////////////////////////////////////
/**
2.
Se citesc  x si y cu cel mult 9 cifre fiecare.
a)	Eliminate din x toate cifrele egale cu cifra zecilor lui y
b)	Afisati cea mai mare cifra a lui x
c)	Afisati media aritmetica dintre y si oglinditul lui
d)	Verificati daca produsul dintre x si y este palindrom
e)	Afisati numarul obtinut din x dupa inlocuirea tuturor cifrelor pare ale lui x cu 9
Exemplu: x=54752   y=54
a)	472
b)	7
c)	49.5
d)	2956608 nu este palindrom
e)	59759
////
#include <iostream>
using namespace std;
int main()
{
    long long x,y;
    cin>>x>>y;
    int cifraZecimalaY;
    cifraZecimalaY=y/10%10;
    long long copiex=x;
    long long rezA=0;
    long long rezAfinal=0;
    int cifmax=-1;
    long long oglindity=0;
    long long copiey=y;
    long long p=1;
    long long copiep=1;
    long long oglinditp=0;
    long long rezE=0;
    long long rezEfinal=0;

    while(x)
    {
        int cifra=x%10;
        if(cifra!=cifraZecimalaY)
            rezA=rezA*10+cifra;
        if(cifra>cifmax)
            cifmax=cifra;
        x=x/10;
    }
    while(rezA)
    {
        int cifra=rezA%10;
        rezAfinal=rezAfinal*10+cifra;
        rezA=rezA/10;
    }
    while(y)
    {
        int cifra=y%10;
        oglindity=oglindity*10+cifra;
        y=y/10;
    }
    p=copiex*copiey;
    copiep=p;
    while(p)
    {
        int cifra=p%10;
        oglinditp=oglinditp*10+cifra;
        p=p/10;
    }
    while(copiex)
    {
        int cifra=copiex%10;
        if(cifra%2==0)
            rezE=rezE*10+9;
        else rezE=rezE*10+cifra;
        copiex=copiex/10;
    }
    while(rezE)
    {
        int cifra=rezE%10;
        rezEfinal=rezEfinal*10+cifra;
        rezE=rezE/10;
    }

    cout<<"a) "<<rezAfinal<<endl;
    cout<<"b) "<<cifmax<<endl;
    cout<<"c) "<<(float)(copiey+oglindity)/2<<endl;
    if(oglinditp==copiep)
        cout<<"d) "<<copiep<<" e palindrom"<<endl;
    else
        cout<<"d) "<<copiep<<" nu e palindrom"<<endl;
    cout<<"e) "<<rezEfinal;
}
*/

/**
3.
Se citeste un numar x cu cel mult 15 cifre si doua cifre: c1 si c2.
Afisati numarul obtinut dupa inlocuirea tuturor aparitiilor cifrei c1 in x cu cifra c2
Exemplu:
X= 14564544784    c1=4  c2=0
Se va afisa 10560500780

*/
#include <iostream>
using namespace std;
int main()
{
    long long x;
    long long y=0;
    long long ogli=0;
    int c1,c2;
    cout<<"x=:";
    cin>>x;
    cout<<"c1=";
    cin>>c1;
    cout<<"c2=";
    cin>>c2;
    cout<<endl;
    while(x)
    {
        int cifra=x%10;
        if(cifra==c1)
            y=y*10+c2;
        else y=y*10+cifra;
        x=x/10;
        cout<<y<<endl;
    }
    while(y)
    {
        ogli=ogli*10+y%10;
        y=y/10;
    }
    cout<<endl;
    cout<<ogli;
}



