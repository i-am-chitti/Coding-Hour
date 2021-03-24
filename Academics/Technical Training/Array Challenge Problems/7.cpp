/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++) cin>>arr[i];
    sort(arr,arr+N);
    int target;
    cin>>target;
    unordered_map<int,int> mp;
    set<pair<int,int>> st;
    for(int i=0;i<N;i++) mp[arr[i]]++;
    for(auto it=mp.begin();it!=mp.end();it++) {
        if(mp.find(target-it->first)!=mp.end() && st.find(make_pair(it->first,target-it->first))==st.end()) st.insert(make_pair(target-it->first,it->first));
    }
    for(auto it=st.begin();it!=st.end();it++) cout<<it->first<<" "<<it->second<<"\n";

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