#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    ll t,N;
    cin>>N;
    ll minimum=INT_MAX,maximum=INT_MIN;
    for(int i=0;i<N;i++) {
        cin>>t;
        minimum=min(t,minimum);
        maximum=max(t,maximum);
    }
    cout<<2*(maximum-minimum)<<endl;
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