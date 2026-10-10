#include <iostream>
using namespace std;
int main ()
{
    int year;
    cin>>year;
    if(year%100==0)
       cout<<(year%400==0);
    else
       cout<<(year%4==0&&year%100!=0);
    return 0;
}