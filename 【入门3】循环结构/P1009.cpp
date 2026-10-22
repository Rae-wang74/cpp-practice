#include <iostream>
using namespace std;
int main ()
{
    int n,S=0;
    cin>>n;
    for (int i=0;i<n;i++){
        int a=1;
        for (int j=1;j<=n-i;j++)
          a*=j;
        S+=a;
    }
    cout<<S;
    return 0;
}
//本题要用到大数乘法，不会