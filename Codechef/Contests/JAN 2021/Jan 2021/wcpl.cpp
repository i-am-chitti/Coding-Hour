#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> H, int K) {
    int dp[4020][4020], aux[4020], N=H.size();
    sort(H.begin(),H.end(),greater<int>());
    for(int i=0;i<N+10;i++) {
        aux[i]=-1;
        for(int j=0;j<K+10;j++) dp[i][j]=-1;
    }

}

int main() {
    int T,N,K;
    cin>>T;
    while(T--) {
        cin>>N>>K;
        vector<int> H(N);
        for(int i=0;i<N;i++) {
            cin>>H[i];
        }
    }
}