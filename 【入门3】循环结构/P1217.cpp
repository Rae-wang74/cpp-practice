#include <iostream>
#include <math.h>
using namespace std;
bool isPrime[100000001];
int main ()
{
    for (int i=0;i<=100000000;i++)
        isPrime[i]=true;
    
    isPrime[1]=false;
    for (int i=2;i*i<=100000000;i++){
        if (isPrime[i]){
            for (int j=i*i;j<=100000000;j+=i)
                isPrime[j]=false;
        }
    }

    int a,b;
    cin>>a>>b;


    for (int i=a;i<=b;i++){
        int num=i;
        int reverse=0;

        for (int j=0;num>0;j++){
            reverse=reverse*10+num%10;
            num/=10;
        }

        if(i==reverse&&isPrime[i])
                cout<<i<<endl;
            
    }
    return 0;
}