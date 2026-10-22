#include <iostream>
using namespace std;
int main ()
{
    int L,s=0,n=0,judge;
    cin>>L;
    for (int i=2;;i++){
        judge=1;
        for (int j=2;j<i;j++){
            if (i%j==0)
              judge=0;
        }
        if (judge==1){
            s+=i;
            if (s>L)
               break;
            else{
            n++;
            cout<<i<<endl;
            }
        }
    }
    cout<<n;
    return 0;
}