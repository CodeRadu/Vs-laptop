#include <iostream>
using namespace std;
//  😀👍 ⚠️

int nrcif (int n, int k) {
    int cif,ct=0;
    while (n){
        cif = n % 10;
        if (cif % k == 0) ct++;
        n /=10;                     
    }
    return ct;
}
int main () {
    int n , k;
    cin >> n >> k;
    cout << nrcif(n, k);
}