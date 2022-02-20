#include <iostream>
using namespace std;

int prim(int k) {
    int ct = 0;
    for (int i = 1; i <= k /2; i++) {
        if (k % i == 0) ct ++;
    }
    if (ct == 1) return 1; // ==> prim
    else return 0; // == > nu pe prim

}

int main () {
    int n;
    if (prim(n)) {

    }
    
}