#include <iostream>
using namespace std;
int main ()
{
    int month[12];
    for (int i=0;i<12;i++)
        cin>>month[i];

    int rest=0,store=0;
    for (int i=0;i<12;i++){
        int money=300+rest;
        int ex=money-month[i];
        if (ex<0){
           cout<<'-'<<i+1;
           store=0;
           return 0;
        }
        store+=ex/100*100;
        rest=ex%100;
    }
    if (store>0)
        cout<<store*1.2+rest;
    return 0;
}