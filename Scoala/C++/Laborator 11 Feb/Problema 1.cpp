#include <iostream>

using namespace std;

int main()
{
    int n, v[101], i;
    cin>>n;
    for (i=1; i<=n; i++)
        cin>>v[i];
    for (i=1; i<=n/2; i++)
        swap (v[i], v[n+1-i]);
    for (i=1; i<=n; i++)
         cout<<v[i]<<" ";
}