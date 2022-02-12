#include <iostream>

using namespace std;

int main() {
    int n, imp = 0, par = 0;
    cin >> n;
    int v[1001];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        if (v[i] % 2 == 1) imp++;
        else par++;
    }

    cout << abs(imp - par);
}