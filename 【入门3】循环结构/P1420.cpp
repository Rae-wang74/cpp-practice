#include <iostream>
using namespace std;
int main ()
{
    int a[1000];
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    int mx=0,t=1;

    for (int i=1;i<n;i++){
        if (a[i]==a[i-1]+1)
            t++;
        if (t>mx)
            mx=t;
        if (a[i]!=a[i-1]+1) 
            t=1;
           
    }
    cout<<mx;
}