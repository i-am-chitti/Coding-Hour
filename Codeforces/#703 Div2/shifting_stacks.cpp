#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    ll N,t,tSum=0;
    bool flag=1;
    cin>>N;
    vector<ll> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    ll iSum=0;
    for(int i=0;i<N;i++) {
        iSum+=i;
        tSum+=arr[i];
        if(iSum>tSum) {
            flag=0;
            break;
        }
    }
    if(flag) cout<<"YES\n";
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