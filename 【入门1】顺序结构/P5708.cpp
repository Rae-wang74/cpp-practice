#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main ()
{
    float a,b,c,p,S;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    S=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<fixed<<setprecision(1)<<S;
    return 0;
}
