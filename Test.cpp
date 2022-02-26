#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <climits>
//# include "C:\Users\Ticusan Titus\Desktop\Deale Mele\Vs code\New folder\Scoala\C++\AA - Main\Function.cpp"
using namespace std;
//  😀👍 ⚠️     


int main () {
    int a=1,semn = -1,p=0;
    while (a < 100) {
        p = p +( pow (a,2) * semn) ;
        semn = semn * -1;
        a++;

    }
    cout << p;
}