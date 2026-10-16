#include <iostream>
using namespace std;
int main ()
{
    int n,count;
    char name[4]={'A','B','C','D'};
    cin>>n;
    for (int i=0;i<4;i++){
        count=(name[i]!='A')+(name[i]=='C')+(name[i]=='D')+(name[i]!='D');
        if (count==n)
          cout<<name[i]<<endl;
    }
    return 0;
}