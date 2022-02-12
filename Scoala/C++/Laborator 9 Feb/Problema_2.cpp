#include <iostream>
using namespace std;

int main()
{
    int n, v[100];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    int k = 0;

    for (int i = 1; i <= n / 2; i++) {
        cout << v[i] << " " << v[n - k] << " ";
        k++;
    }

    if (n % 2 == 1) cout << v[(n + 1) / 2];
}