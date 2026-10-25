#include <stdio.h>
#include <string.h>
using namespace std;
char s1[10000000],s2[10000000];
char result[10000000];
int main ()
{
    bool find=false;
    scanf("%s",s1);
    scanf("%s",s2);
    int len=strlen(s1);
    for (int j=0;j<len;j++){
        result[0]=s1[len-1];
        strncpy(result+1,s1,len-1);
        result[len]='\0';
        strcpy(s1,result);
        if (strstr(result,s2)!=NULL){
            printf("true");
            find=true;
            return 0;
        }
    }
    if (!find)
       printf("false");
    return 0;
}