/**
1. Se citeşte de la tastatură un număr natural x de cel mult 9 cifre. Se cere să se
a) verifice dacă numărul de cifre pare este egal cu numărul de cifre impare.
b) calculeze cea mai mica cifra impara a lui x. Daca numarul nu are cifre impare afisati -1
Exemplu: dacă x =61432, atunci el are 3 cifre pare(2, 4, 6) şi 2 cifre impare (3, 1), de unde rezultă că numărul de cifre pare nu este egal cu numărul de cifre impare.
Cea mai mica cifra impara este 1

#include <iostream>
using namespace std;
int main()
{
    long long x;
    cin>>x;
    int cmin=10;
    int i=0,p=0;
    while(x)
    {
        int cifra=x%10;
        if(cifra%2==1)
        {
            i++;
            if(cifra<cmin)
                cmin=cifra;
        }
        else
            p++;
        x=x/10;
    }
    if(i==p)
        cout<<"nr cifre pare = nr cifre impare"<<endl;
    else cout<<"nr cifre pare != nr cifre impare"<<endl;
    if(cmin!=10)
        cout<<cmin;
    else cout<<-1;
}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
2. Se citeşte de la tastatură un număr natural x de cel mult 9 cifre si cel putin 2 cifre. Se cere să se verifice dacă numărul conţine cel puţin o cifră de zero.
Exemplu: dacă x =61432, atunci el nu conţine nici o cifră egală cu zero, dar dacă valoarea iniţială a numărului x este x =12003 atunci se va afişa numărul conţine cifre de zero.

#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int k=0;
    while(x)
    {
        int cifra=x%10;
        if(cifra==0)
            k++;
        x=x/10;
    }
    if(k==0)
        cout<<"x nu are cifre de zero";
    else cout<<"x are "<<k<<" cifre de zero";
}

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
3. Se citeşte de la tastatură un număr natural x de cel mult 9 cifre si cel putin 2 cifre. Se cere să se verifice dacă cifrele numărului sunt în ordine crescătoare de la prima cifră spre ultima.
Exemplu: dacă x = 344567 atunci el are cifrele în ordine crescătoare, iar dacă x =12432 atunci el nu are cifrele în ordine crescătoare.
#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int flag=0;
    while(x>9&&flag==0)
    {
        int u=x%10;
        int z=x/10%10;
        if(z>u)
            flag=1;
        x=x/10;
    }
    if(flag==1)
        cout<<"x nu are cifrele in ordine crescatoare";
    else cout<<"x are cifrele in ordine crescatoare";
}
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
4. Se citeşte de la tastatură un număr natural x de cel mult 9 cifre. Se cere să se verifice dacă cifrele pare ale numărului sunt în ordine descrescătoare de la prima cifră spre ultima. Daca numarul nu contine nicio cifra para se va afisa NU
Exemplu: dacă x = 98675410 atunci el are cifrele pare în ordine descrescătoare, iar dacă n=55243 atunci el nu are cifrele pare în ordine descrescătoare. Daca x=5531 se va afisa NU

#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int y;
    int k=0;
    while(x)
    {
        int cifra=x%10;
        if(cifra%2==0)
        {
            y=y*10+cifra;
            k++;
        }
        x=x/10;
    }
    int flag=0;
    if(k==0&&flag==0)cout<<"NU";
    else
    {
        cout<<y<<endl;
        while(y)
        {
            int u=y%10;
            int z=y/10%10;
            if(u<z)
                flag=1;
            y=y/10;
        }
        if(flag==0)
            cout<<"cifrele pare sunt in ordine descrescatoare";
        else
            cout<<"cifrele pare NU sunt in ordine descrescatoare";
    }

}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
5. Verificati daca toate cifrele lui x sunt distincte, afisati “sunt distincte” sau “nu sunt distincte”
Exemplu: x= 7 sunt distincte, x= 1648 sunt distincte
x=137451 nu sunt distincte, x= 223892 nu sunt distincte

#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int flag=0;
    while(x>9&&flag==0)
    {
       int u=x%10;
       int copiex=x;
       while(copiex)
       {
           int z=copiex/10%10;
           if(z==u)
            flag=1;
           copiex=copiex/10;
       }
       x=x/10;
    }
    if(flag==0)
        cout<<"sunt distincte";
    else cout<<"nu sunt distincte";
}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
6. Verificati daca toate cifrele lui x sunt mai mici ca 5, afisati Da/NU

#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int flag=0;
    while(x&&flag==0)
    {
        int cifra=x%10;
        if(cifra>=5)
            flag=1;
        x=x/10;
    }
    if(flag==0)
        cout<<"Da";
    else cout<<"Nu";

}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
7. Verificati daca prima cifra a lui x este egala cu ultima si afisati Da/NU
#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int u=x%10;
    int p;
    while(x)
    {
        if(x<10)
            p=x;
        x=x/10;
    }
    if(u==p)
        cout<<"Da";
    else cout<<"Nu";
}

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
8. Se citesc x si y numere natural cu cel mul t 9 cifre toate distincte. Afisati
a) toate cifrele din x care apar in y
b) cate cifre din y NU apar in x
c) verificati daca prima cifra a lui x apare in y
Exemplu: x=38104 y=245187
a) 8 1 4
b) 3
c) Prima cifra a lui x nu apare in y
*/
#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cin>>x>>y;
    int copiex=x;
    int k=0;
    int p=0;
    while(copiex)
    {
        int cifrax=copiex%10;
        int copiey=y;
        while(copiey)
        {
            int cifray=copiey%10;
            if(cifrax==cifray)
                cout<<cifrax<<" ";
            copiey=copiey/10;
        }
        copiex=copiex/10;
    }
    cout<<endl;
    int copiey=y;
    while(copiey)
    {
        int cifray=copiey%10;
        int copiex=x;
        int flag=0;
        while(copiex)
        {
            int cifrax=copiex%10;
            if(cifrax==cifray)
                flag=1;
            copiex=copiex/10;
        }
        if(flag==0)
            k++;
        copiey=copiey/10;
    }
    cout<<k<<endl;
    copiex=x;
    while(copiex)
    {
        if(copiex<10)
           p=copiex;
        copiex=copiex/10;
    }
    /// cout<<p<<endl;
    copiey=y;
    int flag2=0;
    while(copiey)
    {
        if(copiey%10==p)
            flag2=1;
        copiey=copiey/10;
    }
    if(flag2==1)
        cout<<"prima cifra a lui x apare in y";
    else cout<<"prima cifra a lui x nu apare in y";

}
