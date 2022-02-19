#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int v[1001];
    int z[1001];
    int i=0,j=0;
    int flag=0;
     for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
     for(j=0;j<n;j++)
    {
        cin>>z[j];
    }
    for(i=0;i<n-1&&flag==0;i++)
    {
        int aux;
        aux=v[i];
        for(j=0;j<n;j++)
        {
          if(aux!=z[j])flag=1;
          else
          {
              flag=0;
              break;
          }
        }
    }

if(flag==1)cout<<"NU";
else cout<<"DA";
}
