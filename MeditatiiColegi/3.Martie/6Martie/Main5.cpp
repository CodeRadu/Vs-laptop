#include <iostream>
using namespace std;
int main()
{
    int n, nr,poz,i;
    cin>>n>>nr >> poz;
    int a[1501];

    //citire
    for( i=1;i<=n;i++)
        cin>>a[i];

    // adaugare 
    n++;
     for (int i = poz+ 1; i <= n ; i++) {
       a[i+1] =a[i];
    }
    a[poz] = nr;

    // afisare
    for( i=1;i<=n;i++)
        cout << a[i] << " ";
    // 5 10 2 7 3 9 1 6
}