#include <iostream>
#include <fstream>
 
using namespace std;
 
ifstream fin ("bac.in");
ofstream fout ("bac.out");
 
int main ()
{
    int x, a, b, K=0;
    int N, f[1001];
    fin >> N;
    for (int i = 0; i < N; i++)
    {
        fin >> x;
        f[x]=1;
    }
    int M;
    fin >> M;
    for (int i = 0; i < M; i++)
    {
 
        fin >> a >> b;
        for (int j = a; j <= b; j++)
            if (f[j] == 1)
                K++;
        fout << K << '\n';
    }
    return 0;
}