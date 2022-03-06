#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
void citire(int v[],int n)
{
    for(int i=1;i<=n;i++)
        fin>>v[i];
}
void afisare(int v[],int n)
{
    for(int i=1;i<=n;i++)
        fout<<v[i]<<" ";
}
int main()
{
  int n,v[101];
  fin>>n;
  citire(v,n);
  for(int i=1;i<=n;i++)
    {
        if(v[i]<0)
          v[i]=100;
    }
  fout<<"a) ";
  afisare(v,n);




  return 0;
}