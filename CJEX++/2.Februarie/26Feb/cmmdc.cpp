#include <iostream>
using namespace std;
int cmmdc_dif(int a, int b)
{
    while (a != b)
        if (a > b)
            a = a - b;
        else
            b = b - a;
    return a;
}
int main()
{
    int x, y, dc;
    cin >> x >> y;
    dc = cmmdc_dif(x, y);
    cout << "cmmdc(" << x << "," << y << ")=" << dc;
    return 0;
}