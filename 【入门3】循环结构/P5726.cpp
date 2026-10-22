#include <stdio.h>
#include <algorithm>
using namespace std;
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
       scanf("%d",&a[i]);
    int mx=*max_element(a,a+n);
    int mn=*min_element(a,a+n);
    int total=0;
    for (int j=0;j<n;j++)
        total+=a[j];
    float average=(total-mx-mn)/(n-2.0);
    printf("%.2f",average);
    return 0;
}