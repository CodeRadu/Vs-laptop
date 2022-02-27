#include <iostream>
#include <fstream>
#include <climits>
#include <math.h>
#include <cstdlib>
using namespace std;
ifstream fin("niceset.in");
ofstream fout("niceset.out");

int Mai_Mic_Ca_S(int a, int b, int c , int s) {
    int p = abs(a- b) + abs(a - c) + abs (b - c);

    if (p <= s) return 1;
    else return 0;
}

int main () {
    int s, n ,p[300000],k=0;
    fin >> n >> s;
    for (int i =1 ; i < n ; i++) {
        fin >> p[i];
    }

    for (int i =1 ; i < n-2 ; i++) {
        if(Mai_Mic_Ca_S(p[i] , p[i+1] , p[i+2] , s)) k++;
    }
    fout << k;
}