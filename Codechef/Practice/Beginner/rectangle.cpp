#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int t;
    map<int,int> mp;
    for(int i=0;i<4;i++) {
        cin>>t;
        mp[t]++;
    }
    auto it=mp.begin();
    if(mp.size()==1) cout<<"YES";
    else if(mp.size()==2) {
        if(it->second==2 && (++it)->second==2) cout<<"YES";
        else cout<<"NO"; 
    }
    else cout<<"NO";
    cout<<endl;
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