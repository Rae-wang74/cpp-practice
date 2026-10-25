#include <stdio.h>
#include <string.h>
int main (){
    char s[1000000];
    fgets(s,sizeof(s),stdin);
    bool judge=false;
    char digit[]="0123456789";
    for (int i=0;digit[i]!='\0';i++){
        if (strchr(s,digit[i])!=NULL){
            printf("Yes");
            judge=true;
            break;
        }
    }
    if (!judge)
       printf("No");
    return 0;
}