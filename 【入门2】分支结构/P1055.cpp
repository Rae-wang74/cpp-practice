#include <stdio.h>
int main ()
{
    int a,b,c,d,e,f,g,h,i,ans;
    char j;
    scanf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-%c",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    ans=(a*1+b*2+c*3+d*4+e*5+f*6+g*7+h*8+i*9)%11;
    if (j=='X'){
        if (ans==10)
          printf("Right");
        else
          printf("%d-%d%d%d-%d%d%d%d%d-%d",a,b,c,d,e,f,g,h,i,ans);
    }
    else{
        if (j-'0'==ans)
          printf("Right");
        else{
            if(ans==10)
              printf("%d-%d%d%d-%d%d%d%d%d-X",a,b,c,d,e,f,g,h,i);
            else
              printf("%d-%d%d%d-%d%d%d%d%d-%d",a,b,c,d,e,f,g,h,i,ans);
        }
    }
    return 0;
}