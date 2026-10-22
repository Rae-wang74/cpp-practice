#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n<0){
       cout<<'-';
       n=-n;
    }
    int reverse=0,x=n;
    for (int i=0;x>0;i++){
        reverse=reverse*10+x%10;
        x/=10;
    }
    cout<<reverse;
    return 0;
    
}