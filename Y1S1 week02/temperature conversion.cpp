#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double F,C;
    cin>>F;
    C = (F - 32)*5/9;
    cout<<fixed<<setprecision(2)<<C;
    return 0;
}