#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("cifre15.in");
ofstream fout("cifre15.out");
int ogli(long long nr)
{
    long long ogli=0;
    while(nr)
    {
        ogli=ogli*10+nr%10;
        nr=nr/10;
    }
    return ogli;
}
int main()
{
    /**

    int n;
    fin>>n;
    long long nr;
    long long p=1;
    int ucif=-1;
    int nrzero=0;
    for(int i=1;i<=n;i++)
    {
        fin>>nr;
        p=p*nr;
    }
    long long aux=ogli(p);
    long long aux2=ogli(aux);

    ucif=aux2%10;

    while(aux2<p)
    {
        aux2=aux2*10;
        nrzero++;
    }
    fout<<nrzero<<" "<<ucif;
    */



}
