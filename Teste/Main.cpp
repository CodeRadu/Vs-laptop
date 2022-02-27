#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <climits>
//#include "C:\Users\Ticusan Titus\Desktop\Deale Mele\Vs code\New folder\Scoala\C++\AA - Main\Function.cpp"
using namespace std;

int Stergere_a_n_cifra(int a , int n) {
int k=1;
int j = a;
while (a) {
    k = k * 10;
    a--;
}

int p = (n / k * pow (10, j-1) );
return p + n % (k / 10);
}
int NrCifre(int n ) {
    int k = 0;
    while (n) {
        k++;
        n = n /10;
    }
    return k;
}

int main () {
    cout << "=======================" << endl;
    cout << Stergere_a_n_cifra(1, 123);
    cout << " " <<  NrCifre(23451);    
}