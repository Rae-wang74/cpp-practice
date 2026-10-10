#include <iostream>
using namespace std;
int main ()
{
    double Sn=0;
    int k,n;
    cin>>k;
    for(n=1;;n++){
        Sn+=1.0/n;
        if(Sn>k)
          break;
    }
    cout<<n;
    return 0;
}