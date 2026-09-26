#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    printf("%15d\n",a);
    printf("%15u\n",a);
    printf("%15o\n",a);
    printf("%15x",a);
    return 0;
}