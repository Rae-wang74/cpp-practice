#include <iostream>
using namespace std;
int main ()
{
    int n,c=1;
    cin>>n;
    for (int i=0;i<n;i++){
      for (int j=1;j<=n-i;j++){
        if (c<10)
          cout<<0<<c;
        else
          cout<<c;
        c++;
      }
      cout<<endl;
    }
    return 0;
}