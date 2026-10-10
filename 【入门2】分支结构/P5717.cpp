#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b<=c||b+c<=a||a+c<=b)
      cout<<"Not triangle\n";
    else{
        if (a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
          cout<<"Right triangle\n";
        else if(a*a+b*b>c*c&&b*b+c*c>a*a&&a*a+c*c>b*b)
          cout<<"Acute triangle\n";
        else
          cout<<"Obtuse triangle\n";
        if(a==b||b==c||a==c)
          cout<<"Isosceles triangle\n";
        if(a==b&&b==c)
          cout<<"Equilateral triangle\n";
    }
    return 0;
}