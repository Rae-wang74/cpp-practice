#include <stdio.h>
using namespace std;
int main ()
{
    char a,b,c,d;
    scanf("%c%c%c.%c",&a,&b,&c,&d);//将数字读成字符
    printf("%c.%c%c%c",d,c,b,a);
    return 0;
}
