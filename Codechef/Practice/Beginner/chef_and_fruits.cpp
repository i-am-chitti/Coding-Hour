#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N,M,K;
    cin>>N>>M>>K;
    int diff=abs(N-M);
    cout<<diff<<endl;
    if(diff>K) cout<<min(N,M)+diff<<endl;
    else cout<<K-diff<<endl;
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