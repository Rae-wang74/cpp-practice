#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
struct dot
{
    double x;
    double y;
};

int main ()
{
    dot d;
    cin>>d.x>>d.y;
    cout<<sqrt(d.x*d.x+d.y+d.y);
    return 0;
}