#include <iostream>
using namespace std;
int a[1000000],n=0;
int main()
{
    for (int i=0;i<1000000;i++){
        cin>>a[i];
        if (a[i]==0)
           break;
        n++;
    }
    for (int j=n-1;j>=0;j--)
        cout<<a[j]<<' ';
    return 0;
}