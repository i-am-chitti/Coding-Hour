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
            //vector<int> tower1, tower2;
            int i,j,k;
            for(i=0;i<N && tower1Height<K;i++) {
                tower1Height+=H[i];
                //tower1.push_back(H[i]);
            }
            // for(j=i;j<N;j++) {
            //     tower2Height+=H[j];
            //     tower2.push_back(H[j]);
            // }
            int t2,t1,nBoxes=0;
            for(t1=1;t1<i;t1++) {
                for(t2=i;t2<N;t2++) {
                    if(H[t1]>H[t2] && tower1Height-H[t1]+H[t2]>=K && tower1Height-H[t1]+H[t2]<tower1Height) {
                        tower1Height+=H[t2]-H[t1];
                        swape(&H[t1], &H[t2]);
                    }
                }
            }
            tower1Height=0;
            cout<<"\nTower1: ";
            for(k=0;k<i && tower1Height<K;k++) {
                cout<<H[k]<<" ";
                nBoxes++;
                tower1Height+=H[k];
            }

            i=k;

            sort(H+i,H+N,greater<int>());
            //filtering tower2 boxes
            for(j=i;j<N && tower2Height<K;j++) {
                tower2Height+=H[j];
            }
            for(t1=i;t1<j;t1++) {
                for(t2=j;t2<N;t2++) {
                    if(H[t1]>H[t2] && tower2Height-H[t1]+H[t2]>=K && tower2Height-H[t1]+H[t2]<tower2Height) {
                        tower2Height+=H[t2]-H[t1];
                        swape(&H[t1], &H[t2]);
                    }
                }
            }

            tower2Height=0;

            cout<<"\nTower2: ";
            for(k=i;k<j && tower2Height<K;k++) {
                cout<<H[k]<<" ";
                tower2Height+=H[k];
                nBoxes++;
            }

            if(tower1Height<K || tower2Height<K) cout<<"\n-1"<<endl;
            else cout<<"\nNumber of Boxes: "<<nBoxes<<endl;

        }
    }
}