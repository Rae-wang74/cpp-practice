#include <stdio.h>
using namespace std;
int main ()
{
    char a[200];
    char b[200];
    scanf("%s",&a);
    getchar();
    fgets(b,sizeof(b),stdin);
    printf("%s\n",a);
    printf("%s",b);
    return 0;
}