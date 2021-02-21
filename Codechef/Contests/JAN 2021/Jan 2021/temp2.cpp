#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void swape(int *a, int *b) {
    int t=*a;
    *a=*b;
    *b=t;
}

int main() {
    int T,N,K;
    cin>>T;
    while(T--) {
        cin>>N>>K;
        int tower1Height=0, tower2Height=0, nBoxes=0, totalHeight=0;
        int H[N];
        for(int i=0;i<N;i++) {
            cin>>H[i];
            totalHeight+=H[i];
        }
        sort(H,H+N,greater<int>());
        if(N==1 || totalHeight<2*K) {
            cout<<"-1"<<endl;
        }
        else if(H[0]>=K && H[1]>=K) cout<<"2"<<endl;
        else {
            totalHeight=0;
            int k,i,j;
            for(i=0;i<N && totalHeight<2*K;i++) {
                totalHeight+=H[i];
            }
            for(k=0;k<i;k++) {
                for(j=i;j<N;j++) {
                    if(H[k]>H[j] && totalHeight-H[k]+H[j]>=2*K && totalHeight-H[i]+H[j]<totalHeight) {
                        totalHeight+=H[j]-H[k];
                        swape(&H[k], &H[j]);
                    }
                }
            }
            totalHeight=0;
            for(k=0;k<N && totalHeight<2*K;k++) {
                totalHeight+=H[k];
                nBoxes++;
            }
            cout<<nBoxes<<endl;
        }
    }
}