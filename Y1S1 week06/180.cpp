#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
  double x,e;
  cin>>x>>e;
  
  //约束x范围
  double pi=acos(-1);
  while (x>2*pi)
    x-=2*pi;
  while (x<0)
    x+=2*pi;

  //sinx
  double sinx=0,t1=x;
  int i=1;
  while (fabs(sin(x)-sinx)>=e){
    sinx+=t1;
    t1=-t1*x*x/(i+1)/(i+2);
    i+=2;
  }
  cout<<sinx<<endl;

  //cosx
  double cosx=1,t2=-x*x/2;
  int j=1;
  while (fabs(cos(x)-cosx)>=e){
    cosx+=t2;
    t2=-t2*x*x/(j+2)/(j+3);
    j+=2;
  }
  cout<<cosx;
  return 0;
}