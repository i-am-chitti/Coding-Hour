/*
	Author: Deepak kumar
	UID: 18BCS2295
	Path: academics/tech_training/
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    ll N,Q;
    cin>>N>>Q;
    vector<ll> arr(N+1,0);

    vector<vector<int>> queries(Q,vector<int>(3));
    for(int i=0;i<Q;i++) cin>>queries[i][0]>>queries[i][1]>>queries[i][2];
    
    for(int i=0;i<queries.size();i++) {
        arr[queries[i][0]-1]+=queries[i][2];
        arr[queries[i][1]]-=queries[i][2];
    }

    ll maximum=arr[0];
    for(int i=1;i<N;i++) {
        arr[i]+=arr[i-1];
        maximum=max(arr[i],maximum);
    }
    cout<<maximum<<endl;
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