/**
Se citesc n numere din fisierul date.in
afisati in fisierul date.out
a)suma numerelor prime
b)cel mai mare numar care este divizibil cu 5
c)afisati toate numerele din intervalul [500,1000] care sunt divizibile cu 3 dar nu cu 2
*/
#include <fstream>

using namespace std;

ifstream fin("date.in");
ofstream fout("date.out");


int main()
{

    int n;
    fin>>n;
    int nr;
    int ok;
    int s=0;
    int maxi=-1;
    int q=1;
    for(int i=1; i<=n; i++)
    {
        ok=1;
        fin>>nr;
        if(nr<2)
            ok=0;
        else
        {
            if(nr%2==0&&nr!=2)
                ok=0;
            else
                for(int d=3; d*d<=nr; d=d+2)
                    if(nr%d==0)
                    {
                        ok=0;
                    }

        }
        if(ok==1)
            s=s+nr;
        if(nr%5==0)
        {
            if(nr>maxi)
            {
                maxi=nr;
            }
        }
        if(nr>=500&&nr<=1000&&nr%3==0&&nr%2==1)
            fout<<nr<<",";



    }
    fout<<"a)Suma numerelor prime este:"<<s<<endl;
    if(maxi!=-1)
    fout<<"b)cel mai mare numar care este divizibil cu 5"<<maxi<<endl;
    else
    fout<<"b)nu avem niciun numar divizibil cu 5";
}
