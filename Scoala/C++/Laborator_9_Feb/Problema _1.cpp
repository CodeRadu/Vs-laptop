#include <iostream>
using namespace std;

int main() {
    int n, v[100];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    for (int i = 2; i <= n; i = i + 2) {
        cout << v[i] << " ";
    }
    cout << endl;

    for (int i = n; i >= 1; i = i - 2) {
        cout << v[i] << " ";
    }

}


/*
5 2 10 1 29 23
1 2  3 4  5

*/