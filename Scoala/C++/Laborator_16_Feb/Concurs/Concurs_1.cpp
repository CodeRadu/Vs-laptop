#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("fantastice.in");
ofstream fout ("fantastice.out");



int Verif_Prim (int k) 
{
    if (k < 2) 
    {
        return 0;
    }
    else {
        if (k!=2 && k% 2 ==0)
        {return 0;
        }
        else {
            for (int d = 3; d*d <= k; d=d+2) 
            {
                if (k % d == 0) 
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int Afisare_Numar_Divizori (int k) 
{
    int ct = 0;
    for (int i = 1; i<=k ; i++) 
    {
        if (k % i == 0) 
        {
            ct++;
        }
    }
    return ct;
}

int Numar_De_Divizori_Prim(int k){
    if(Verif_Prim(Afisare_Numar_Divizori(k))){
        return 1;
    }
    return 0;
}
int main () {
    int n,ct=0;
    int v[1000000];
    fin >> n;
    for (int i = 1; i<= n; i++) {
        fin>>v[i];
        if(Numar_De_Divizori_Prim(v[i])) ct++;
    }

    fout << ct;
}


