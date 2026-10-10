#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    float s,v;
    int time,hour,minute;
    scanf("%f %f",&s,&v);
    time=ceil(s/v)+10;
    hour=time/60;
    minute=time%60;
    if(minute==0){
        if(hour>8&&hour<=22)
            printf("%d:00",24+8-hour);  
        else if(hour<=8)
            printf("0%d:00",8-hour);
        else if(hour>22)
            printf("0%d:00",24-8-hour);
    }
    else{
        if(hour>7&&hour<=21){
            if(minute>50)
                printf("%d:0%d",24+8-1-hour,60-minute);
            else
                printf("%d:%d",24+8-1-hour,60-minute);
        }
        else if(hour<=7){
            if(minute>50)
                printf("0%d:0%d",8-1-hour,60-minute);
            else
                printf("0%d:%d",8-1-hour,60-minute);
        }
        else if(hour>=21){
            if(minute>50)
                printf("0%d:0%d",24-1+8-hour,60-minute);
            else
                printf("0%d:%d",24-1+8-hour,60-minute);
        }
    }
    return 0;
}
//太复杂了，是不是可以将一天的时间减去花费的时间再加上8：00