/*
Un natrual se numeste superprim dc si numai daca\
abc superprim
daca abc prin
ab prim
a prim
*/
#include <iostream>
using namespace std;

int prim (int n) {
    int ct = 0;
    for (int i = 1; i <= n ; i++) {
        if (n%i == 0) {
            ct++;
        }
    }
    if (ct == 2) return 1;
    return 0;
}
int main () {
    int k = 0 , n;
    cin >> n;
    do {
        if (!prim(n)) k++;
        k = k / 10;
    }
    while (n);
    if (k == 0) cout << "S";
    else cout << "NS";
}
