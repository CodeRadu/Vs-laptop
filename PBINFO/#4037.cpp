#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int v[1001];
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    int p=0,i=0;
    for(int i=1;i<=n;i++)
    {
        if(v[i]%2==0)
            p++;
        else
            i++;
    }
    int aux=p-i;
    cout<<p<<" "<<i<<endl;
    cout<<aux;

}
