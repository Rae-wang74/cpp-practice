#include <stdio.h>
#include <iomanip>
#include <math.h>
using namespace std;
int main ()
{
    double a,b,GM;
    scanf("%lf %lf",&a,&b);
    GM=sqrt(a*b);
    printf("%.2lf",GM);
    return 0;
}