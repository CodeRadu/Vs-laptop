#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <climits>
//  😀👍 ⚠️   
// @Titus  

 std::ifstream fin("nr.in");
 std::ofstream fout ("nr.out");

 using namespace std;
int sumanr(long long n) {
    int c;
    int v[],s;
    while (n)
    {
        c = n % 10;
        n/=10;
        if(!v[c]) {
            s = s+c;
            v[c] = 1;
        }
    }

return s;
}



int main () {
    long long n,s;
    float mini = FLT_MAX;
    while(fin >> n) {
        s = sumanr(n);
        if (s == mini) {
            
        }
        if (s < mini && s % 2 == 0) {
            mini = s;
        }
    }
   
}