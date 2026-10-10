#include <stdio.h>
using namespace std;
int main ()
{
    char a;
    scanf("%c",&a);
    if(int(a)>90)
      printf("%c",char(int(a)-32));
    else
      printf("%c",char(int(a)+32));
    return 0;
}