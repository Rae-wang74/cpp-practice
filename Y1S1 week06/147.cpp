#include <stdio.h>
int main ()
{
    char answer=0;
    int Na,Nb,Nc,Nd;
    scanf("%d %d %d %d",&Na,&Nb,&Nc,&Nd);
    int cap[9]={0,120,40,85,50,100,140,70,100};
    for (int a=1;a<9;a++){
        for (int b=1;b<9;b++){
            for (int c=1;c<9;c++){
                for (int d=1;d<9;d++){
                    if (a==b||a==c||a==d||b==c||b==d||c==d)
                       continue;
                    if (cap[a]<Na)
                       continue;
                    if (cap[b]<Nb)
                       continue;
                    if (cap[c]<Nc) 
                       continue;
                    if (cap[d]<Nd)
                       continue;
                    printf("%d %d %d %d\n",a,b,c,d);
                    answer=1;
                }
            }
        }
    }
    if (answer==0)
       printf("-1");
    return 0;
}