#include <iostream>

using namespace std;

int main()
{
    int n, v[101], i, ok=1;
    cin>>n;
    for (i=1; i<=n; i++)
        cin>>v[i];
    for (i=1; i<=n/2; i++)
        if (v[i]!=v[n+1-i])
        {
            ok=0;
            break;
        }
    if (ok==0) cout<<"NU";
    else cout<<"DA";
}