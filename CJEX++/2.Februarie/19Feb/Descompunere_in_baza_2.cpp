#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <climits>
# include "C:\Users\Ticusan Titus\Desktop\Deale Mele\Vs code\New folder\Scoala\C++\AA - Main\Function.cpp"
using namespace std;

int Highest_Powerof_2_Less_Than_n(int n)
{
    int res = 0;
    for (int i=n; i>=1; i--)
    {
        if ((i & (i-1)) == 0)
        {
            res = i;
            break;
        }
    }
    return res;
}

void Descompunere_In_Puteri_Ale_Lui_2 (int k) {
    while (k != 0) {
        cout << Highest_Powerof_2_Less_Than_n(k);
        k = k - Highest_Powerof_2_Less_Than_n(k);
        if (k!=0) cout << "+";
    }

}

int main  () {
int n = 13;
Descompunere_In_Puteri_Ale_Lui_2(n);

}
// elu