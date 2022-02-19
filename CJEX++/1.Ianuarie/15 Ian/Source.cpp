#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    long long  n;
    cin >> n;
    long long s=0;
    int k = 2;
    if (n % 2 == 0)
    {
        s = s + 2;
        k++;
    }
    s = s + 1 + n;
    for (int d = 3; d * d <= n; d = d + 2)
    {
        if (n % d == 0)
        {
            s = s + d;
            k++;
        }
    }
    double x;
    x = (double)s / k;
    cout << fixed << setprecision(2) << x;
}
