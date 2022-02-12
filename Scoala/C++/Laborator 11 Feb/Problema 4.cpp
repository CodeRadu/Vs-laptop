#include <iostream>

using namespace std;

int main()
{
    int n, v[1001], i, ct=0, j;
    cin>>n;
    for (i=1; i<=n; i++)
        cin>>v[i];
    for (i=1; i<=n-1; i++)
        for (j=i+1; j<=n; j++)
        if ((v[i]+v[j])%n==0) ct++;
    cout<<ct;
}