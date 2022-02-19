#include <iostream>
using namespace std;
int main()
{
    int v[1000][1000];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        cin>>v[i][j];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        cout<<v[i][j];


}

