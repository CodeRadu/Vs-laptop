#include <iostream>
using namespace std;
void unicat(int v[],int &n)
{
   int i,j;
   for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(v[i]==v[j])
            {
                ///stergem elementul v[j] din sir
                for(int k=j+1;k<n;k++)
                {
                    v[k-1]=v[k];
                }
                n=n-1;
                j--;
            }
        }
    }
}
int main()
{
    int v[1000],i;
    int n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }

    unicat(v,n); ///parametri sunt adresa sirului v si dimensiunea n
      for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}

