#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int T,N,K;
    cin>>T;
    while(T--) {
        cin>>N>>K;
        int tower1Height=0, tower2Height=0, nBoxes=0;
        int H[N];
        for(int i=0;i<N;i++) {
            cin>>H[i];
        }
        if(N==1) {
            cout<<"-1"<<endl;
        }
        else {
            sort(H,H+N,greater<int>());

            // for(int i=0;i<N && (tower1Height<K || tower2Height<K);i++) {
            //     if(i%2 && tower2Height<K) {
            //         tower2Height+=H[i];
            //         nBoxes++;
            //     }
            //     else if(i%2==0 && tower1Height<K) {
            //         tower1Height+=H[i];
            //         nBoxes++;
            //     }
            // }
            
            int i,j;
            
            for(i=0,j=1;i<N-1 && j<N;i+=2,j+=2) {
                tower1Height+=H[i];
                tower2Height+=H[j];
                nBoxes+=2;
                if(tower1Height>=K || tower2Height>=K) break;
            }

            if(tower1Height>=K && tower2Height>=K) cout<<nBoxes<<endl; //no problem
            else if(tower2Height<K) {
                //two possibilities 
                if(i==N-2 && j==N-1) {
                    //last two boxes might be wrongly fitted
                    tower1Height-=H[i];
                    tower2Height-=H[j];
                    if(tower1Height+H[j]>=K && tower2Height+H[i]>=K) cout<<nBoxes<<endl;
                    else cout<<"-1"<<endl;
                }
                else if(j<N) {
                    for(int k=j+1;k<N && tower2Height<K;k++) {
                        tower2Height+=H[k];
                        nBoxes++;
                    }
                    if(tower1Height>=K && tower2Height>=K) cout<<nBoxes<<endl;
                    else cout<<"-1"<<endl;
                }
            }
        }
    }
}