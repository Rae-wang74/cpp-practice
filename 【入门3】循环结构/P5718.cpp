#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
      cin>>a[i];
    int min=a[0];
    for (int j=0;j<n;j++){
        if (a[j]<min)
          min=a[j];
    }
    cout<<min;
    return 0;
}