#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <climits>
//# include "C:\Users\Ticusan Titus\Desktop\Deale Mele\Vs code\New folder\Scoala\C++\AA - Main\Function.cpp"
using namespace std;
//  😀👍 ⚠️     


int main () {
    long long s,nr = 2;
    for (int i = 1; i <= 100 ; i++) {
        s = s + floor(nr/7);
        nr= nr *2;
        cout << nr << " ";
    }
}