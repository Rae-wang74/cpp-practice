#include <iostream>
using namespace std;
int main ()
{
    int sum;
    cin>>sum;
    for (int i=1;i<=5;i++){
        for (int j=1;j<=5;j++){
            for (int m=1;m<=5;m++){
                for (int n=1;n<=5;n++){
                    for (int k=1;k<=5;k++){
                        if (1*i+4*j+6*m+4*n+k==sum&&i+j+m+n+k==15&&i*j*m*n*k==120){
                           cout<<i<<' '<<j<<' '<<m<<' '<<n<<' '<<k;
                           return 0;
                        }
                    }
                }
            }
        }
    }
}