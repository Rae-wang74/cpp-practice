#include <stdio.h>
int main ()
{
    int D,n,m;
    scanf("%d %d %d",&D,&n,&m);

    int mid[n][2],final[m][2];
    for (int i=0;i<n;i++){
        for (int j=0;j<2;j++)
           scanf("%d",&mid[i][j]);
    }

    for (int i=0;i<m;i++){
        for (int j=0;j<2;j++)
           scanf("%d",&final[i][j]);
    }

    //final最晚出发
    int latest1 = -1;
    for (int j = 0; j < m; j++)
        if (final[j][1] <= D && final[j][0] > latest1)
            latest1 = final[j][0];

    //mid最晚出发
    int latest2 = -1;
    for (int i = 0; i < n; i++)
        if (mid[i][1] <= latest1 && mid[i][0] > latest2)
            latest2 = mid[i][0];

    //统计出发时间 == latest 的可行方案数
    int k = 0;
    for (int i = 0; i < n; i++){
        if (mid[i][0] != latest2 || mid[i][1] > latest1) 
            continue;
        for (int j = 0; j < m; j++){
        if (final[j][1] <= D && mid[i][1] <= final[j][0])
            k++;
        }
    }
    printf("%d",k);
    return 0;
}