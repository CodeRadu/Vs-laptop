#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int a[1001];
    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    for(int i = 1; i < k; ++i)
        for(int j = i + 1; j <= n; ++j)
            if(a[i] > a[j])
                swap(a[i], a[j]);


    for(int i = k; i < n; ++i)
        for(int j = i + 1; j <= n; ++j)
            if(a[i] < a[j])
                swap(a[i], a[j]);




    for(int i = 1; i <= n; ++i)
        cout << a[i] << ' ';

    return 0;
}
// 5 1 2 3 4 5