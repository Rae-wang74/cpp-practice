#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int a,i;
    cin>>a;
    if (a==1)//注意a=1时要单独考虑，否则会陷入死循环
      cout<<1;
    else{
        for (i=2;;i++){
            a=floor(a/2.0);
            if (a==1)
              break;
    }
    cout<<i;
}
    return 0;
}