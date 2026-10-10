#include <iostream>
using namespace std;
int main ()
{
    int n,i,j,k,l,p;
    cin>>n;
    for (i=0;i<n;i++){
        for (j=1;j<n-i;j++)
          cout<<" ";
        for (k=0;k<=i;k++)
          cout<<char('A'+k);
        for (k=i-1;k>=0;k--)
          cout<<char('A'+k);
        for (l=1;l<n-i;l++)
          cout<<" ";
        cout<<endl;
    }
    return 0;
}