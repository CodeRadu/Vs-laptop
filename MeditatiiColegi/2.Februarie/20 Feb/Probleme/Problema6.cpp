#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <climits>
# include "C:\Users\Ticusan Titus\Desktop\Deale Mele\Vs code\New folder\Scoala\C++\AA - Main\Function.cpp"
using namespace std;
//  😀👍 ⚠️     

int Verif_Prim (int k){

}

int Aproape_Prim (int k) {
    for (int i = 2; i <= k / 2; i++) {
        if (k % i == 0) {
            int a , b;
            a = i;
            b = k / i;
            if (Verif_Prim(a) && Verif_Prim(b)){
                return a , b;
            }

        }
    }
}
