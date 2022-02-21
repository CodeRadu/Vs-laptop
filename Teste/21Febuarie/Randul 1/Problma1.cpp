/*Se citesc 2 numere naturale a si b sa se afiseze toate perechike x si y din intervalul [a,b] care au probprietatea ca 
au acelas nr de divizori
*/
#include <iostream>
using namespace std;

int Nr_Divizori (int n) {
    int ct = 1;
    for (int d = 1; d<=n/2; d++) {
        if (n % d == 0) ct++;
    }
    return ct;
}

int main () {
    int a , b , x , y;
    cin >> a >> b;
    for(x = 0 ; x <=b ; x++) {
        for (y = x + 1; y<=b; y++) {
            if(Nr_Divizori(x) == Nr_Divizori(y));
            cout << x << y;
        }
    }
}