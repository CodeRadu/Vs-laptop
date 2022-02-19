#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int v[100]={0};
    int x;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        v[x]=1;
    }
    for(int i=100;i>=1;i--)
    {
        if(v[i]==0)
            cout<<i<<" ";
    }
}
