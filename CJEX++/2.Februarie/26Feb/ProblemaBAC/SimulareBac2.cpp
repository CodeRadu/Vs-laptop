#include <fstream>
using namespace std;
ifstream fin("bac.in");
ofstream fout("bac.out");
void citire(int v[1001],int n)
{
    int x;
    for(int i=0;i<n;i++)
    {
        fin>>x;
        v[x]=1;
    }
}
int main()
{
    int v[1001]={0},n;
    fin>>n;
    citire(v,n);
    int m;
    fin>>m;
    int x,y;
    int v2[1001]={0};
    int s=0;
    for(int i=0;i<=1000;i++)
    {
        s=s+v[i];
        v2[i]=s;
    }
    for(int i=1;i<=m;i++)
    {
        fin>>x>>y;
        fout<<v2[y]-v2[--x]<<endl;
    }
}