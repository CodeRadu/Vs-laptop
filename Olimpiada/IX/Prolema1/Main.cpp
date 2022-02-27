#include <iostream>
#include <fstream>
#include <climits>
#include <math.h>
using namespace std;
ifstream fin("eliminare.in");
ofstream fout("eliminare.out");


int Cel_Mai_Mare_Numar_Dupa_Eliminarea_a_K_Cifre(int n, int k)
{

    for (int j = 0; j < k; j++)
    {

        int ans = 0;
        int i = 1;

        while (n / i > 0)
        {

            int temp = (n / (i * 10)) * i + (n % i);
            i *= 10;

            ans = max(ans, temp);
        }
        n = ans;
    }
    
    return n;
}


int main () {
    int n, NrCif;
    fin >> n >> NrCif;
    fout << Cel_Mai_Mare_Numar_Dupa_Eliminarea_a_K_Cifre(n,NrCif);
   
   
}

/*
469135092
9592

*/