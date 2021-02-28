#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int t,N1,N2;
    cin>>N1>>N2;
    unordered_map<int,int> mp1,mp2;
    vector<pair<int,int>> aux;
    for(int i=0;i<N1;i++) {
        cin>>t;
        mp1[t]++;
    }
    for(int i=0;i<N2;i++) {
        cin>>t;
        mp2[t]++;
    }
    int ans=INT_MIN;
    auto it=mp1.begin();
    while(it!=mp1.end()) {
        if(mp2[it->first]!=0) {
            ans=max(ans,it->first);
        }
        it++;
    }
    cout<<ans<<"\n";

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