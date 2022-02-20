#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <climits>
# include "C:\Users\Ticusan Titus\Desktop\Deale Mele\Vs code\New folder\Scoala\C++\AA - Main\Function.cpp"
using namespace std;
//  😀👍 ⚠️     

int Verif_pp(int k) {
    if (sqrt(k) == (float)sqrt(k)  ) return 1;
    else return 0;
}

int Sexy (int n) {
    int k = 2;
    while (k) {
        n = n * k;
        if (Verif_pp(n)) {
            return n;
        }
         n = n / k;
         k++;
    }
}

int main () {
    cout << Sexy(72);
}