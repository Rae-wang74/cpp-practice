#include <iostream>
using namespace std;
int main ()
{
    int x;
    cin>>x;
    cout<<(x%2==0&&x>4&&x<=12)<<" "
    <<(x%2==0||(x>4&&x<=12))<<" "
    <<((x%2==0&&(x<=4||x>12))||(x%2!=0&&x>4&&x<=12))<<' '
    <<!(x%2==0||(x>4&&x<=12));
    return 0;
}