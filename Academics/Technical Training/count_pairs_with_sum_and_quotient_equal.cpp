#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N,t;
    cin>>N;
    unordered_map<int,int> mp;
    for(int i=0;i<N;i++) {
        cin>>t;
        mp[t]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++) {
        if(it->first!=1 && it->first!=0) {
            int y=it->first;
            int x = (y*y);
            if(x%(1-y)==0 && mp[x/(1-y)]) {
                cout<<x/(1-y)<<" "<<y<<endl;
            }
        }
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