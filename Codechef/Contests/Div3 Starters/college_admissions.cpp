/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N,M;
    cin>>N>>M;
    vector<int> collegeRank(N);
    vector<int> studentRank(M);
    for(int i=0;i<N;i++) cin>>collegeRank[i];
    for(int i=0;i<M;i++) cin>>studentRank[i];
    vector<vector<int>> preferenceList;
    int K;
    for(int i=0;i<M;i++) {
        cin>>K;
        vector<int> temp(K);
        for(int j=0;j<K;j++) cin>>temp[j];
        preferenceList.push_back(temp);
    }
}
 

int main()
{
    fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}