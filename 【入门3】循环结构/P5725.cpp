#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int j=1;
    for (int i=0;i<n;i++){
        int time1=0;
        for (j;time1<n;j++){
            if (j<10)
               cout<<0<<j;
            else
               cout<<j;
            time1++;
        }
        cout<<endl;
    }

    cout<<endl;

    int p=1;
    for (int k=0;k<n;k++){
        int time2=n-k-1;
        for (int l=0;l<2*(n-k-1);l++){
          cout<<' ';
        }
        for (p;time2<n;p++){
            if (p<10)
               cout<<0<<p;
            else
               cout<<p;
            time2++;
        }
        cout<<endl;
    }
    return 0;
}