#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int n,x,time=0,digit=1;
    cin>>n>>x;
    for (int i=1;i<=n;i++){
        int t=i;
        while (t>=1){
            if (t%10==x)
              time++;
            t/=10;
        }
    }
    cout<<time;
    return 0;
}