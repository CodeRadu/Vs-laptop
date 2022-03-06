#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <climits>
using namespace std;
//  😀👍 ⚠️   
// @Titus  

int Afisare_Maxim_Din_Vector_Unidimensional(int v[] , int n , int &PozitieMaxima) {

    int maxi = v[0];

    for (int i = 0 ; i < n ; i++) {
        if (v[i] > maxi) {
            maxi = v[i];
            PozitieMaxima = i;
        }
    }


    return maxi;
}


int Afisare_Minim_Din_Vector_Unidimensional(int v[] , int n , int &PozitieMinima) {

    int mini = v[0];

    for (int i = 0 ; i < n ; i++) {
        if (v[i] < mini) {
            mini = v[i];
            PozitieMinima = i;
        }
    }


    return mini;
}


int main () {
    int n[] = {1, 32 , 239812 , 2 ,  4};
}