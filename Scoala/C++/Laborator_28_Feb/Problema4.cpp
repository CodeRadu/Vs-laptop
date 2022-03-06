#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,poz=0,k =0, a[1001];
    cin >> n;


    for(int i = 0 ; i < n ; ++i)
    {
        cin >> a[i];

        if(a[i]>k) {
        k=a[i] , poz=i; }
    }

    sort(a , a+poz);

    for(int i = 0 ; i < poz ; ++i)
    cout << a[i] << ' ';



    sort(a+poz , a+n);

    for(int i = n-1 ; i >= poz ; --i)
    cout << a[i] << ' ';

    return 0;
}