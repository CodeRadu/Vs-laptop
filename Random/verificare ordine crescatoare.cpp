#include <iostream>
using namespace std;
int main()
{
    int v[501];
    int n;
    int flag=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    /// 1 2      3      2 1
    /// 1 2      3      4 5 pozitie
    if(n%2==0)
    {
      for(int i=0;i<=n/2;i++)
      {
         for(int j=n;j>=n/2+1;j--)
         {
             if(v[i]!=v[j]) flag=1;
         }
      }
    }
    else
    {
      for(int i=0;i<n/2;i++)
      {
           for(int j=n;j>n/2+1;j--)
            {
             if(v[i]!=v[j]) flag=1;
            }
      }
    }
    if(flag==1)cout<<"NU";
    }
