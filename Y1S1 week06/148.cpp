#include <stdio.h>
int main ()
{
    int n,x,y,z,count=0;
    scanf("%d",&n);
    for (x=1;x<n;x++){
        for (y=1;y<n;y++){
            for (z=1;z<n;z++){
                if (2*x+6*y+z>0.9*n&&2*x+6*y+z<=n){
                    if (x!=y&&y!=z&x!=z){
                        if((x>=z&&x<=y)||(x>=y&&x<=z)){
                            if(x%2==0){
                                if(z%10==8){
                                    if(y/10==0){
                                        if (x>=10&&x<100){
                                          printf("%d %d %d\n",x,y,z);
                                          count++;
                                        }
                                    }
                                    else {
                                        printf("%d %d %d\n",x,y,z);
                                        count++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (count==0)
      printf("no answer");
    return 0;
}