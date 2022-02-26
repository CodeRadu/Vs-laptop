/*
    functie care se autoapeleaza = functie recursiva

*/
#include <iostream>
using namespace std;
int cmmdc_dif(int a, int b)
{
    if(a==b)
        return a;
    if (a > b)
        return cmmdc_dif(a - b, b);
    else
        return cmmdc_dif(a, b - a);
}
//cmmdc_dif(18,24) = cmmdc_dif(18,6) =  cmmdc_dif(12,6) = cmmdc_dif(6,6) = 6   
int main()
{
    int x, y, dc;
    cin >> x >> y;
    dc = cmmdc_dif(x, y);
    cout << "cmmdc(" << x << "," << y << ")=" << dc;
    return 0;
}