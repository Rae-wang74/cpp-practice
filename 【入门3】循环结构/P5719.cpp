#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int n,k,s1=0,s2=0,num1=0,num2=0;
    cin>>n>>k;
    for (int i=1;i<=n;i++){
        if (i%k==0){
          s1+=i;
          num1++;
        }
        else{
            s2+=i;
            num2++;
        } 
    }
    cout<<fixed<<setprecision(1)<<float(s1)/num1<<' ';
    cout<<fixed<<setprecision(1)<<float(s2)/num2;
    return 0;
}