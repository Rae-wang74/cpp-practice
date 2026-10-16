#include <iostream>
using namespace std;
int main ()
{
    char man,name[8]={'A','B','C','D','E','F','G','H'};
    int n,count,x=0;
    cin>>n;
    for (int i=0;i<8;i++){
        count=(name[i]=='H'||name[i]=='F')+(name[i]=='B')+(name[i]=='G')+(name[i]!='B')+(name[i]!='H'&&name[i]!='F')+(name[i]!='H'&&name[i]!='F')+(name[i]!='C')+(name[i]=='H'||name[i]=='F');
        if (count==n){
            x++;
            man=name[i];
        }      
    }
    if (x>1||x==0)
      cout<<"DONTKNOW";
    else
      cout<<man;
    return 0;
}