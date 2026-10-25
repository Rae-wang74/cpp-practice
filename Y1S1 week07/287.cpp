#include <stdio.h>
#include <string.h>
using namespace std;
int main ()
{
    char a[5];
    scanf("%s",a);
    int digit=strlen(a);
    for (int i=digit-1;i>=0;i--)
        printf("%c,",a[i]);
    printf("%d",digit);
    return 0;
}