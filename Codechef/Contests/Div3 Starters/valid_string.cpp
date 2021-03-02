#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    ll N,C;
    cin>>N>>C;
    string str;
    cin>>str;
    bool ifFound=0;
    vector<ll> pos;
    for(int i=0;i<N;i++) {
        if(str[i]=='1') {
            pos.push_back(i);
        }
    }
    for(int i=0;i<pos.size()-1;i++) {
        if((pos[i+1]-pos[i]-1)<=C) {
            ifFound=1;
            break;
        } 
    }
    if(!pos.empty() && (N-pos.back()-1+pos[0])<=C) ifFound=1;
    if(ifFound) cout<<"YES\n";
    else cout<<"NO\n";
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