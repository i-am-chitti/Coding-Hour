#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N,K;
    cin>>N>>K;
    int rem=0;
    //K=min(N,K);
    for(int i=K;i>1;i--) {
        rem=max(rem,N%i);
    }
    cout<<rem<<endl;
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