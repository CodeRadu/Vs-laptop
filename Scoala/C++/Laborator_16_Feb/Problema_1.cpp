#include <iostream>

using namespace std;

int main()
{
long int n, n2=0, d=1, cif=0;

cin>>n;

while(n>0){
    cif = 10 * (n%10) + (n/10%10);
    n2 = n2 + cif * d;
    d = d * 100;
    n = n / 100;
}

cout<<n2;


}