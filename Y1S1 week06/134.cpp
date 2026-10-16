#include <stdio.h>
#include <algorithm>
using namespace std;
int main ()
{
    int N;
    scanf("%d",&N);
    int guess[10][4],cnt[10],loc[10];
    for (int i=0;i<N;i++){
        for (int j=0;j<4;j++){
            scanf("%1d",&guess[i][j]);
        }
        scanf("%d %d",&cnt[i],&loc[i]);
    }
    //输入
    
    int ansnum=0,result;

    for (int num=1000;num<10000;num++){

        int exist=1;
        int ans[4];
        ans[0]=num/1000;//千
        ans[1]=num/100%10;//百
        ans[2]=num/10%10;//十
        ans[3]=num%10;//个

        //从1000-9999开始筛选
        for (int i=0;i<N;i++){

            int count=0,location=0;
            
            //位置相同
            for (int j=0;j<4;j++){
                if (ans[j]==guess[i][j])
                   location++;
            }

            //数字个数
            int anscnt[10]={0},guesscnt[10]={0};
            for (int a=0;a<4;a++)
                anscnt[ans[a]]++;//枚举数的数字个数

        
            for (int n=0;n<4;n++){
                guesscnt[guess[i][n]]++;//猜的数的个数
                }
            

            for (int k=0;k<10;k++){
                count+=min(guesscnt[k],anscnt[k]);//相同数个数
            }

            if (count!=cnt[i]||location!=loc[i]){
                exist=0;
                continue;
            }
        }

        if (exist==1){
           ansnum++;
           result=num;
        }
    }

    if (ansnum==1)
       printf("%d",result);
    else
       printf("Not sure");

    return 0;
}