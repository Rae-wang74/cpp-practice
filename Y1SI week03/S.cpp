#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main ()
{
    float a,b,c,q;
    cin>>a>>b>>c;
    q=(a+b+c)/2;
    cout<<fixed<<setprecision(2)<<sqrt(q*(q-a)*(q-b)*(q-c));
    return 0;
}