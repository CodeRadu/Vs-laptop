#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("deminare.in");
ofstream fout("deminare.out");

int NRlinii, NrColoane, Cerinta, maxi, NrMIne, s[1000][1000], F[1000];
int Coord_X_Mina, Coord_Y_Mina, cnt, p[1000], nrmax;

int main()
{
    fin >> Cerinta >> NRlinii >> NrColoane >> NrMIne;
    for (int i = 1; i <= NrMIne; i++)
    {
        fin >> Coord_X_Mina >> Coord_Y_Mina;
        s[Coord_X_Mina][Coord_Y_Mina] = 1;
        F[Coord_X_Mina]++;
        if (F[Coord_X_Mina] > maxi)
        {
            maxi = F[Coord_X_Mina];
        }
    }
    if (Cerinta == 1)
    {
        for (int i = 1; i <= NRlinii; i++)
            if (F[i] == maxi)
                fout << i << " ";
    }
    else
    {
        for (int i = 1; i * i <= NrMIne; i++)
            if (NrMIne % i == 0)
            {
                cnt++;
                p[cnt] = i;
                if (i * i != NrMIne)
                {
                    cnt++;
                    p[cnt] = NrMIne / i;
                }
            }
        for (int i = 1; i <= NRlinii; i++)
            for (int j = 1; j <= NrColoane; j++)
                s[i][j] += s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
        for (int k = 1; k <= cnt; k++)
            for (int i = 1; i <= NRlinii - p[k] + 1; i++)
                for (int j = 1; j <= NrColoane - NrMIne / p[k] + 1; j++)
                {
                    int rez = s[i + p[k] - 1][j + NrMIne / p[k] - 1] - s[i + p[k] - 1][j - 1] - s[i - 1][j + NrMIne / p[k] - 1] + s[i - 1][j - 1];
                    if (rez > nrmax)
                        nrmax = rez;
                }
        if (nrmax == 0)
            fout << -1;
        else
            fout << NrMIne - nrmax;
    }
}