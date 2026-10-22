#include <iostream>
using namespace std;
int main ()
{
    int k,day=1,n=1,coin=0;
    cin>>k;
    for (int i=1;i<=k;i++){
        coin+=n;
        day--;
        if (day==0){
            n++;
            day=n;
        }
    }
    cout<<coin;
    return 0;
}