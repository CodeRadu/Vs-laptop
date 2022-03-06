#include <iostream>
using namespace std;
int main()
{

    
    int n, p,i;
    cin>>n>>p;
    int a[1501];

    //citire
    for( i=1;i<=n;i++)
        cin>>a[i];

    // eliminare
    for( i=p+1;i<=n;i++)
        a[i-1]=a[i];
    n--;

    // afisare
    for( i=1;i<=n;i++)
        cout << a[i] << " ";

}