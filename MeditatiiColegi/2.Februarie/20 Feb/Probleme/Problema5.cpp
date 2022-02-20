#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <climits>
# include "C:\Users\Ticusan Titus\Desktop\Deale Mele\Vs code\New folder\Scoala\C++\AA - Main\Function.cpp"
using namespace std;
//  😀👍 ⚠️     


int Egal (int k) {
    int aux,imp, ok = 0;
    while(k) {
        aux = k % 10;
        k = k / 10;

        if (ok == 0) {
            if (aux % 2 == 1) {
                imp = aux;
                ok++;
            }
        }

        if (aux % 2 == 1) {
            if (aux != imp) {
                return 0;
            }
        }
    } // 7727470  7921470 
    return 1;

}