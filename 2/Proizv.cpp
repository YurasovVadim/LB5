#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int S1,S2,K;
    cin>>K;
    S1=K;
    S2=K;
    int a[S1][S2];
    for (S1=1; S1<=K; S1++) {
        for (S2=1; S2<=K; S2++) {
            a[S1][S2]=S2*S1;
            if (K==8) cout<<setw(2)<<oct<<a[S1][S2]<<" ";
            else if (K==10) cout<<setw(2)<<dec<<a[S1][S2]<<" ";
            else if (K==16) cout<<setw(2)<<hex<<a[S1][S2]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
