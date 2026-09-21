#include <iostream>
using namespace std;
int main()
{
    int x,k;
    cin>>x>>k;
    cout<<(((x/k)/k)/k)%k<<((x/k)/k)%k<<(x/k)%k<<x%k;
    return 0;
}