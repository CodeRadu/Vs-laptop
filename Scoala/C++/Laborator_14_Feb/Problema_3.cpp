#include <iostream>

using namespace std;
int prim(int x)
{
    int ct=0,d;
    for(d=2;d*d<=x;d++)
        if(x%d==0)
            ct++;
    if(ct==0 && x>1)
        return 1;
    else 
        return 0;

    
}

int main()
{
    int n,v[101],i,j,ct=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
        if(prim(v[i]))
    {
        cout<<v[i]<<" ";
        ct++;
        
    }
    if(ct==0)
        cout<<"NU EXISTA";
    return 0;
}