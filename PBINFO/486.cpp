#include <iostream>
using namespace std;

int main () {
int A[100], n,mini = 0, maxi=0;
cin >> n;
for (int i= 1; i<=n; i++) {
    cin >> A[i];
}
mini = maxi = A[1];
for (int i =1 ; i<=n; i++) {
    if(mini > A[i])
    mini = A[i];


    if (maxi < A[i])
        maxi = A[i];
}
cout << mini << " "<< maxi;
}