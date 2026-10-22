#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[100];
    for (int i=0;i<n;i++)
       cin>>a[i];
    int mx=0,mn=1000;
    for (int i=0;i<n;i++){
        if (a[i]>mx)
           mx=a[i];

        if (a[i]<mn)
           mn=a[i];
    }

    int num=mx-mn;
    cout<<num;
    return 0;

}