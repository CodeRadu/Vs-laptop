#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a,b,rest;
  cin>>a;
  for(int i=1;i<=n-1;i++)
  {
      cin>>b;
      while(b!=0)
      {
          rest=a%b;
          a=b;
          b=rest;
      }
  }
cout<<a;
}
