#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main ()
{
    double x,fx;
    cin>>x;
    if(fabs(x)<=1)
      fx=fabs(x-1)-2;
    else
      fx=1/(1+x*x);
      
    if(fabs(fx)<=1)
        cout<<fixed<<setprecision(2)<<fabs(fx-1)-2;
    else
        cout<<fixed<<setprecision(2)<<1/(1+fx*fx);
    return 0;
}