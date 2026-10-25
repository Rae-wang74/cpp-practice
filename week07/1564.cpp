#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
struct wizard
{
    char name[20];
    int level;
    char dorm[10];
};
struct group
{
    char dormname[10];
    int sum;
    int wizardnum[100];
    int cnt=0;
};

int main ()
{
    int n;
    cin>>n;

    group gp[n];
    for (int i=0;i<n;i++)
        cin>>gp[i].dormname;
    for (int i=0;i<n;i++)
        gp[i].sum=0;

    int m;
    cin>>m;
    wizard w[m];
    for (int i=0;i<m;i++)
        cin>>w[i].name>>w[i].level>>w[i].dorm;


    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (strcmp(w[i].dorm,gp[j].dormname)==0){
                gp[j].wizardnum[gp[j].cnt]=i;
                gp[j].sum+=w[i].level;
                gp[j].cnt++;
            }
        }
    }

    int k;
    cin>>k;
    char d[50],d1[15],d2[15];
    for (int i=0;i<k;i++){
        scanf("%s",d);
        int p = 0;
        while (d[p]!='-') p++;
        d[p]='\0';
        strcpy(d1,d);
        strcpy(d2,d+p+2);
        int tmpnum[100];
        int tmpcnt;
        int tmpsum;
        for (int u=0;u<n;u++){
            if (strcmp(gp[u].dormname,d1)!=0)  continue;
            for (int v=0;v<n;v++){
                if (strcmp(gp[v].dormname,d2)!=0)  continue;
                if (gp[u].sum > gp[v].sum) {
                    copy(gp[u].wizardnum,gp[u].wizardnum+100,tmpnum);
                    copy(gp[v].wizardnum,gp[v].wizardnum+100,gp[u].wizardnum);
                    copy(tmpnum,tmpnum+100,gp[v].wizardnum);
                    tmpcnt=gp[u].cnt;
                    gp[u].cnt=gp[v].cnt;
                    gp[v].cnt=tmpcnt;
                    tmpsum=gp[u].sum;
                    gp[u].sum=gp[v].sum;
                    gp[v].sum=tmpsum;
                }
            }
        }
    }

    for (int i=0;i<n;i++){
        cout<<gp[i].dormname<<' ';
        for (int j=0;j<gp[i].cnt;j++)
            cout<<w[gp[i].wizardnum[j]].name<<' ';
        cout<<endl;
    }
    return 0;
}