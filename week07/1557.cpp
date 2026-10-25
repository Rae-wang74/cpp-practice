#include <stdio.h>
#include <string.h>
using namespace std;
int main ()
{
    char s[200];
    scanf("%s",s);
    char result[200];
    int len=strlen(s);
    for (int i=1;s[i]!='\0';i++)
        result[i]=s[i-1];
    result[0]=s[len-1];
    printf("%s",result);
    return 0;
}