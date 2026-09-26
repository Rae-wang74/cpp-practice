#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main ()
{
    double x,a,b;
    cin>>x;
    a=(fabs(x)>1?1/(1+x*x):fabs(x-1)-2);
    b=(fabs(a)>1?1/(1+a*a):fabs(a-1)-2);
    cout<<fixed<<setprecision(2)<<b;
    return 0;
}