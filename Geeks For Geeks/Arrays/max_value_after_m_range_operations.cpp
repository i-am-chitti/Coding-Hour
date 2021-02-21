#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int a,b,K,N,M;
    cin>>N>>M;
    vector<ll> arr(N+1,0);
    while(M--) {
        cin>>a>>b>>K;
        arr[a]+=K;
        arr[b+1]-=K;
    }
    ll maximum=arr[0];
    for(int i=1;i<N;i++) {
        arr[i]+=arr[i-1];
        maximum=max(maximum,arr[i]);
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