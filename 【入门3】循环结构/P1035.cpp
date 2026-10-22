#include <iostream>
using namespace std;
int main ()
{
    int k,n=0;
    cin>>k;
    double Sn=0;
    while(Sn<=k){
        n++;
        double t=1.0/n;
        Sn+=t;
    }
    cout<<n;
    return 0;
}