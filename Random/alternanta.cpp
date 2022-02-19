#include <iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int v[1001];
    int flag=0;
    int i;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }


    for(i=1;i<=n;i++)
    {
        if(v[i]==1&&v[i-1]==1) flag=1;
    }
    if(flag==1)cout<<"NU";
    else cout<<"DA";


}

