#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,a[1001],k;
    cin >> n;
    cin >> k;
    
    for (int i = 0 ; i < n; ++i)
    cin >> a[i];
    
    sort (a, a+k);
    
    for (int i = 0; i < k; ++i)
    cout << a[i] << ' ';
    
    sort (a+k, a+n);
    
    for (int i = n-1 ; i >= k; --i)
    cout << a[i] << ' ';
    
}