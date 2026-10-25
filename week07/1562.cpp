#include <stdio.h>
using namespace std;
struct student
{
    int number;
    char name[20];
    char sex;
    int age;
    int cnt;
};

int main ()
{
    student s[3];
    for (int i=0;i<3;i++)
        scanf("%d %s %c %d %d",&s[i].number,s[i].name,&s[i].sex,&s[i].age,&s[i].cnt);
    
    struct student tmp;
    for (int i=0;i<2;i++){
        for (int j=0;j<2-i;j++)
            if (s[j].cnt<s[j+1].cnt){
                tmp=s[j];
                s[j]=s[j+1];
                s[j+1]=tmp;
            }
    }

    for (int i=0;i<3;i++)
       printf("%d,%s,%c,%d,%d\n",s[i].number,s[i].name,s[i].sex,s[i].age,s[i].cnt);
       
    return 0;
}