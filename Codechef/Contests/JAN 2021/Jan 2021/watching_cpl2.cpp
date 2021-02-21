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
        if(N==1 || totalHeight<2*K) {
            cout<<"-1"<<endl;
        }
        else if(H[0]>=K && H[1]>=K) cout<<"2"<<endl;
        else if(totalHeight==2*K) cout<<N<<endl;
        else {
            sort(H,H+N,greater<int>());
            vector<int> tower1, tower2;
            int i,j;
            for(i=0;i<N && tower1Height<K;i++) {
                tower1Height+=H[i];
                tower1.push_back(H[i]);
            }
            for(j=i;j<N;j++) {
                tower2Height+=H[j];
                tower2.push_back(H[j]);
            }
            int t2,t1,nBoxes=0;
            for(t1=1;t1<tower1.size();t1++) {
                for(t2=0;t2<tower2.size() && tower1Height-tower1[t1]+tower2[t2]>=K;t2++) {
                    if(tower1[t1]!=tower2[t2]) {
                        tower1Height+=tower2[t2]-tower1[t1];
                        swape(&tower1[t1], &tower2[t2]);
                    }
                }
            }
            cout<<"\nTower1: ";
            for(int k=0;k<tower1.size();k++) cout<<tower1[k]<<" ";
            cout<<"\nTower2: ";
            tower2Height=0;
            for(int k=0;k<tower2.size() && tower2Height<K;k++) {
                cout<<tower2[k]<<" ";
                tower2Height+=tower2[k];
                nBoxes++;
            }

            cout<<"\nNumber of Boxes: "<<tower1.size()+nBoxes<<endl;

        }
    }
}