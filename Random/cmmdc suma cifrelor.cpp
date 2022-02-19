#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("date.out");
int cmmdc(int x,int y)
{
    int rest;
    while(y)
    {
        rest=x%y;
        x=y;
        y=rest;
    }
    return x;
}
int sumacif(int n)
{
    int s=0;
    while(n)
    {
        s=s+n%10;
        n=n/10;
    }
    return s;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int suma_cif_a;
    int suma_cif_b;
    int aux;
    suma_cif_a=sumacif(a);
    suma_cif_b=sumacif(b);
    aux=cmmdc(suma_cif_a,suma_cif_b);
    cout<<suma_cif_a<<" "<<suma_cif_b<<endl;
    fout<<aux<<" ";
    fout<<suma_cif_a*suma_cif_b/aux;

}
