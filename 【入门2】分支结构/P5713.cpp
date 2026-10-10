#include <iostream>
using namespace std;
int main ()
{
    int n,Local,Luogu;
    cin>>n;
    Local=5*n;
    Luogu=3*n+11;
    if(Local<Luogu)
      cout<<"Local";
    else
      cout<<"Luogu";
      return 0;
}