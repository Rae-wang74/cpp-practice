#include <iostream>
using namespace std;
int main ()
{
    //埃氏筛
    int prime[100000];
    int m,n;
    cin>>m>>n;
    for (int i=0;i<=n;i++)
        prime[i]=1;

    prime[0]=0,prime[1]=0;

    for (int i=2;i*i<=n;i++){
        if (prime[i]){
            for (int j=i*i;j<=n;j+=i)
                prime[j]=0;
        }
    }

    int mx=0,x=0,have=0;
    int a[100000],k=0,sum[100000];

    for (int i=m;i<=n;i++){
        int num=i;
        int reverse=0;
        while(num>0){
            reverse=reverse*10+num%10;
            num/=10;
        }
        int s=0,n=i;
        if (reverse==i){
            if (prime[i]){
                have=1;
                a[k]=i;
                
                while (n>0){
                    s+=n%10;
                    n/=10;
                }
                sum[k]=s;
                k++;

                if (s>mx){
                    mx=s;
                    x=i;
                }
            }
        }

    }

    if (!have)
       cout<<0<<' '<<0;
    
    for (int i=0;i<k;i++){
        if (sum[i]==mx){
        cout<<a[i]<<' '<<sum[i];
        break;
        }
    }
    
    return 0;

}