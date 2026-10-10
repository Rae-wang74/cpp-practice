#include <stdio.h>
#include <math.h>
int main ()
{
    float s,v;
    scanf("%f %f",&s,&v);
    int t=ceil(s/v)+10;
    int t2=32*60-t;
    if (t2>=24*60)
      t2-=24*60;
    int hour=t2/60;
    int min=t2%60;
    if (hour<10){
        if (min<10)
          printf("0%d:0%d",hour,min);
        else
          printf("0%d:%d",hour,min);
    }
    else{
        if (min<10)
          printf("%d:0%d",hour,min);
        else
          printf("%d:%d",hour,min);
    }
    return 0;
}