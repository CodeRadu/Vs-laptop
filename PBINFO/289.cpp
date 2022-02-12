#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int v[102];
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    bool conditie = false;

    for (int i = 1; i <= n; i++) {
        if (v[i] % 2 == 1) {
            conditie = true;
            break;
        }

    }
    if (conditie) cout << "DA";
    else cout << "NU";
}