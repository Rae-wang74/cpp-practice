#include <stdio.h>
int main ()
{
  int a[20],num=0,i,j,H,h;
  for (i=1;i<=10;i++)
    scanf("%d",&a[i]);
  scanf("%d",&h);
  H=h+30;
  for (j=1;j<=10;j++){
    if (H>=a[j])
      num++;
  }
  printf("%d",num);
  return 0;
}