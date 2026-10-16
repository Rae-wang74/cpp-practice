#include <stdio.h>
int isPrime[10000001];
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    //输入

    for (int i=0;i<=10000000;i++)
        isPrime[i]=1;
    //假定所有都是素数

    isPrime[1]=0;//1不是素数
    
    for (int j=2;j*j<=10000000;j++){
        if (isPrime[j]==1){
            for (int k=j+j;k<=10000000;k+=j)
                isPrime[k]=0;
        }
    }

    for (int i=0;i<n;i++){
        if (isPrime[a[i]]==1)
           printf("YES ");
        else if (isPrime[a[i]]==0)
           printf("NO ");
    }

    return 0;
}