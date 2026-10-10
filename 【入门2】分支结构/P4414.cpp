#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int x,y,z;
    char ch[3];
    cin>>x>>y>>z;
    for (int i=0;i<3;i++)
      cin>>ch[i];
    int mn=min({x,y,z});
    int mx=max({x,y,z});
    int mid=x+y+z-mx-mn;
    for (int j=0;j<3;j++){
        if(ch[j]=='A')
          cout<<mn;
        else if (ch[j]=='B')
          cout<<mid;
        else
          cout<<mx;
        cout<<' ';
    }
    return 0;
}