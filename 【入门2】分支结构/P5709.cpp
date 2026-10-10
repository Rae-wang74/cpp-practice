#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    float m,t,s,left;
    cin>>m>>t>>s;
    if(t==0)
        cout<<0;
    else{
        if(m<=ceil(s/t))
            cout<<0;
        else{
            left=m-ceil(s/t);
            cout<<left;
        }
    }
}