
#include <iostream>
using namespace std;

int main () {
    int x; cin >> x;
    while (x > 100) x = x / 10;
    cout << x / 10 + x % 10;
}