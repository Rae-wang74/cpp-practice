#include <iostream>
using namespace std;
int main ()
{
    int N;
    cin>>N;
    int X,K;

    for (X=100;X>0;X--){
        for (K=1;;K++){
            int money=0;
            int week[7];
            week[0]=X+6*K;
            week[1]=X;
            week[2]=X+1*K;
            week[3]=X+2*K;
            week[4]=X+3*K;
            week[5]=X+4*K;
            week[6]=X+5*K;

            bool over=false;

            for (int date=1;date<365;date++){
                int day=date%7;
                money+=week[day];
            }

            if (money==N){
                cout<<X<<endl<<K;
                return 0;
            }
            if (money>N){
                over=true;
                break;
            }

            if (over) break;
        }
    }
    return 0;
}