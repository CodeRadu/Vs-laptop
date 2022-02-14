#include <iostream>
using namespace std;

int main()
{
    int n, v[100];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    int par = 0, imp = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            par = par + v[i];
        }
        else imp = imp + v[i];
    }

    cout << par - imp;
}
// 5 7 9 2 6 8