#include <iostream>
using namespace std;
int main ()
{
    int sum;
    int a[5]={1,2,3,4,5};
    cin>>sum;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){

            if (j==i)  continue;

            for (int m=0;m<5;m++){

                if (m==j||m==i)  continue;

                for (int n=0;n<5;n++){

                    if (n==i||n==j||n==m) continue;

                    for (int k=0;k<5;k++){

                        if (k==i||k==j||k==m||k==n) continue;
                        if (1*a[i]+4*a[j]+6*a[m]+4*a[n]+1*a[k]==sum){
                            cout<<a[i]<<' '<<a[j]<<' '<<a[m]<<' '<<a[n]<<' '<<a[k];
                            return 0;
                        }
                    }
                }
            }
        }
    }
}