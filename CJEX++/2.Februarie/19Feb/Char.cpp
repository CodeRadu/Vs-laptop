#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <climits>
# include "C:\Users\Ticusan Titus\Desktop\Deale Mele\Vs code\New folder\Scoala\C++\AA - Main\Function.cpp"
using namespace std;
//  😀👍 ⚠️     


char A[] = "ABCDEFGHIJKLMOPQRSTUVWXYZ";
void afis(int n){
    int i, k = 0;
    while (n) {
        if (n%2)
        cout << A[k] << ' ';
        k++;
        n = n / 2;
    }
    cout << "}" << endl;
    
}
int main () {
    int n;
    cin >> n;
    for(int i = 0; i <= (1 << n) - 1; i++) {
        afis(i);
    }
    
    return 0;
}