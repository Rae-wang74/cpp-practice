#include <stdio.h>
int main (){
    int n,x,y,z,i=0;
    scanf("%d",&n);
    for (x=0;x<=n;x++){
        for (y=0;y<=n;y++){
            for (z=0;z<=n;z++){
                if (x+y+z==n&&5*x+3*y+z/3.0==n){
                    printf("%d %d %d\n",x,y,z);
                    i++;
                }
            }
        }
    }
    printf("%d",i);
    return 0;
}