#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int a,b,n,k,m,ones,count=0;
    cin>>a>>b>>n>>k>>m;
    if (k==0||m==0)
      cout<<0;
    else{
        for(int i=a;i<=b;i++){
            ones=i%10;
            if (ones==n&&i%k==0&&i>=pow(10,m-1)&&i<pow(10,m))
              count++;
        }
        cout<<count;
    }
    return 0;
}