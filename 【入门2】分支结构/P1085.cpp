#include <stdio.h>
int main ()
{
  int a[20],i,b[10],j,day=0,max=1,k;
  for (i=1;i<=14;i++)
    scanf("%d",&a[i]);
  b[1]=a[1]+a[2];
  b[2]=a[3]+a[4];
  b[3]=a[5]+a[6];
  b[4]=a[7]+a[8];
  b[5]=a[9]+a[10];
  b[6]=a[11]+a[12];
  b[7]=a[13]+a[14];
  for(j=1;j<=7;j++){
    if (b[j]>8)
      day++;
  }
  if(day==0)
    max=0;
  else{
    for(k=1;k<=7;k++){
      if(b[k]>b[max])
        max=k;
    }
  }
  printf("%d",max);
  return 0;
}