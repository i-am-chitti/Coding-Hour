#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void swap(int *a, int *b) {
    int t=*a;
    *a=*b;
    *b=t;
}

int main() {
    int T,N,M;
    cin>>T;
    while(T--) {
        cin>>N>>M;
        int johnTotal=0,jackTotal=0;
        int John[N],Jack[M];
        for(int i=0;i<N;i++) {
            cin>>John[i];
            johnTotal+=John[i];
        }
        for(int i=0;i<M;i++) {
            cin>>Jack[i];
            jackTotal+=Jack[i];
        }
        int nSwaps=0;

        sort(John,John+N);
        sort(Jack,Jack+M, greater<int>());

        for(int i=0;i<N && i<M && johnTotal<=jackTotal;i++) {
            if(John[i]<Jack[i]) {
                johnTotal+=Jack[i]-John[i];
                jackTotal-=Jack[i]-John[i];
                swap(&John[i], &Jack[i]);
                nSwaps++;
            }
        }
        if(jackTotal>=johnTotal) cout<<"-1"<<endl;
        else cout<<nSwaps<<endl;
    }
}