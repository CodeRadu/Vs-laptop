#include <iostream>
using namespace std;

int cmmdc(int n, int m)
{
    while(n != m)
        if(n > m)
            n -= m;
        else
            m -= n;
            return 1;
}

int main()
{
    int n, v[1000], i,j,ct=0;
    cin>>n;
    for (i=1; i<=n; i++)
        cin>>v[i];

    for(i=1; i<=n-1; i++)
    for (j=i+1;j<=n;j++)
    if (cmmdc(v[i],v[j])==1)
           ct++;
cout << ct;
return 0;
}