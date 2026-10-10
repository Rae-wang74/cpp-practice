#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int h,r;
    float pi=3.14,V;
    cin>>h>>r;
    V=h*(pi*r*r);
    cout<<ceil((20*1000)/V);
    return 0;
}