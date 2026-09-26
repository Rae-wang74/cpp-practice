#include <stdio.h>
using namespace std;
int main ()
{
    int a,b;
    char c[10];
    double d;
    scanf("%d,%x,%s,%lf",&a,&b,&c,&d);
    printf("%15d\n",a);
    printf("%-15d\n",b);
    printf("%15s\n",c);
    printf("%-15.2f",d);
    return 0;
}