#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N,K;
    cin>>N>>K;
    vector<int> points(K);
    for(int i=0;i<K;i++) cin>>points[i];
    string S;
    while(N--) {
        ll tScore=0;
        cin>>S;
        for(int i=0;i<S.length();i++) {
            if(S[i]=='1') tScore+=points[i];
        }
        cout<<tScore<<"\n";
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