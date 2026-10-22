#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    float s;
    cin>>s;
    float x=2,l=2,step=1;
    while (x<s){
        l*=0.98;
        x+=l;
        step++;
    }
    cout<<step;
    return 0;
}