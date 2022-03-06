#include <iostream>
#include <algorithm>
using namespace std;

int Verif_Prim(int k)
{
    if (k < 2)
    {
        return 0;
    }
    else
    {
        if (k != 2 && k % 2 == 0)
        {
            return 0;
        }
        else
        {
            for (int d = 3; d * d <= k; d = d + 2)
            {
                if (k % d == 0)
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}


int main()
{
    int n;
    cin >> n;
    int a[1001];
    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    for(int i = 1; i < n; ++i)
        for(int j = i + 1; j <= n; ++j)
            if(a[i] > a[j])
                swap(a[i], a[j]);



    for(int i = 1; i <= n; ++i) {
        if(Verif_Prim(a[i])   )
            cout << a[i] << " ";
        
    }
    return 0;
}
// 5 1 2 3 4 5