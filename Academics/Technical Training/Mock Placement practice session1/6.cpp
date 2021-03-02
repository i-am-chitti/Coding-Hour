#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int K,t,N;
    cin>>N;
    unordered_map<int,int> mp;
    vector<int> arr;
    for(int i=0;i<N;i++) {
        cin>>t;
        arr.push_back(t);
    }
    cin>>K;
    int temp;
    vector<pair<int,int>> res;
    for(int i=0;i<N;i++) {
        if(mp.find(K-arr[i])!=mp.end()) {
            temp=mp[K-arr[i]];
            while(temp>0) {
                res.push_back(make_pair(arr[i],K-arr[i]));
                temp--;
            }
        }
        mp[arr[i]]++;
    }
    for(auto it=res.begin();it!=res.end();it++) {
        cout<<it->first<<" "<<it->second<<"\t";
    }
    cout<<"\n";
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