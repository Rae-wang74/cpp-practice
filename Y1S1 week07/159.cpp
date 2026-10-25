#include <stdio.h>
#include <string.h>
using namespace std;

int main ()
{
    char s[200];
    fgets(s,sizeof(s),stdin);//输入字符串
    int len=strlen(s);//字符串长度
    if (len>0&&s[len-1]=='\n') {   // 去换行
        s[len-1] = '\0';
        len--;
    }
    
    char instruct;
    scanf("%c",&instruct);//输入指令


    //统计
    if (instruct=='C'){
        char str[100];
        scanf("%s",str);
        int len1=strlen(str);
        
        int t=0;
        for (int i=0;i+len1<=len;){
            if (strncmp(s+i,str,len1)==0){
                t++;
                i+=len1;
            }
            else 
                i++;
        }
        printf("%d",t);
    }


    //删除
    if (instruct=='D'){
        char str[100];
        scanf("%s",str);
        int len1=strlen(str);

        bool find=false;
        for (int i=0;i<len;){
            if ((i+len1<=len)&&(strncmp(s+i,str,len1)==0)&&(!find)){
                i+=len1;
                find=true;
            }
            else{
                printf("%c",s[i]);
                i++;
            }
        }
    }


    //插入
    if (instruct=='I'){
        char str1[100],str2[100];
        scanf("%s %s",str1,str2);
        int len1=strlen(str1);

        int t=0,last;
        for (int i=0;i+len1<=len;i++){
            if (strncmp(s+i,str1,len1)==0){
                t++;
                last=i;
            }
        }
        if (t>0){
                for (int j=0;j<len;j++){
                    if (j==last)
                       printf("%s",str2);
                    printf("%c",s[j]);
                }
            }
        if (t==0)
           printf("%s",s);

    }


    //替换
    if (instruct=='R'){
        char str1[100],str2[100];
        scanf("%s %s",str1,str2);
        int len1=strlen(str1);

        for (int i=0;i<len;){
            if ((i+len1<=len)&&(strncmp(s+i,str1,len1)==0)){
                printf("%s",str2);
                i+=len1;
            }
            else{
                printf("%c",s[i]);
                i++;
            }
        }

    }
}