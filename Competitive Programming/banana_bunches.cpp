/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

ll helper(vector<ll> &arr, ll curr, ll K, ll t, ll count, ll currCount, unordered_map<string,ll> &mp) {
    ll n=arr.size();
    if(K<0) return LONG_LONG_MAX;
    if(K==0) {
        return 0;
    }
    if(curr>=n) return LONG_LONG_MAX;

    if(t==0) return LONG_LONG_MAX;

    string key=to_string(curr)+"$"+to_string(K)+"$"+to_string(t)+"$"+to_string(count)+"$"+to_string(currCount);
    if(mp.find(key)!=mp.end()) return mp[key];

    ll x,y,z;
    x=y=z=LONG_LONG_MAX;
    if(currCount==0) x=helper(arr,curr+1,K,t,count,0,mp); //skip
    else y=helper(arr,curr+1,K,t-1,count,0,mp);
    z=helper(arr,curr+1,K-arr[curr],t,count+1,currCount+1,mp); //purchase
    if(z!=LONG_LONG_MAX) z++;
    return mp[key] = min(x,min(y,z));

}

ll myFun() {
    ll N,K;
    cin>>N>>K;
    vector<ll> arr(N);
    ll sum=0;
    for(int i=0;i<N;i++) cin>>arr[i], sum+=arr[i];
    ll res=LONG_LONG_MAX;
    if(sum<K) return -1;
    unordered_map<string,ll> mp;
    res=helper(arr,0,K,2,0,0,mp);
    if(res==LONG_LONG_MAX) return -1;
    return res;
}


void solve(){

    ll T;
    cin>>T;

    for(ll t=1;t<=T;t++) {
        cout<<"Case #"<<t<<": "<<myFun()<<"\n";
    }
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}