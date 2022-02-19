/**
Se citesc din fisierul date.in 2 numere intregi.
Afisati in fisierul date.out:
- produsul lor
- restul impartirii celui mai mare la cel mai mic
- media aritmetica a celor doua numere
*/
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int main()
{
    int a,b;
    fin>>a>>b;
    fout<<"Suma este "<<a+b<<endl;
    fout<<"Rest = ";
    if(a<=b)
    {
        fout<<b%a<<endl;
    }
    else
        fout<<a%b<<endl;
    fout<<"Media aritmetica ";
    fout<<(float)(a+b)/2;
}
