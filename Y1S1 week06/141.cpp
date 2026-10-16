#include <stdio.h>
int main ()
{
    int a[150][150],b[150][150];
    int m,n;
    scanf("%d %d",&m,&n);
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    //输入

    int max=0,count=0;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            int sum=a[i][j];
            if (i>0)
               sum+=a[i-1][j];
            //上

            if (i<m-1)
               sum+=a[i+1][j];
            //下

            if (j>0)
               sum+=a[i][j-1];
            //左

            if (j<n-1)
               sum+=a[i][j+1];
            
            b[i][j]=sum;
            if (sum>max)
               max=sum;
        }
    }

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (b[i][j]==max)
               count++;
        }
    }

    printf("%d %d\n",max,count);

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (b[i][j]==max)
               printf("%d %d\n",i,j);
        }
    }

    return 0;
}