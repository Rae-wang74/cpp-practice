#include <stdio.h>
#include <string.h>
int main ()
{
    char s[2000];
    scanf("%s",s);
    int len=strlen(s);
    int i=0,j=len-1;
    bool judge=true;
    while(i<j){
        if (s[i]!=s[j]){
            judge=false;
            printf("No");
            return 0;
        }
        i++;
        j--;
    }
    if (judge)
       printf("Yes");
    return 0;
}