#include <iostream>
using namespace std;
int main ()
{
    char a;
    cin>>a;
    cout<<char(int(a)-32);//大写小写字母ascii码相差32，大写在前
    return 0;
}
