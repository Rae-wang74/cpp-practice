#include <stdio.h>
#include <algorithm>
using namespace std;
int main ()
{
  int n,num[3],price[3],total[3],cost[3],k;
  scanf("%d",&n);
  for (int i=0;i<3;i++)
    scanf("%d %d",&num[i],&price[i]);
  for (int j=0;j<3;j++){
    for(k=1;;k++){
      if (k*num[j]>=n)
      break;
    }
    cost[j]=k*price[j];
  }
  printf("%d",min({cost[0],cost[1],cost[2]}));
  return 0;
}