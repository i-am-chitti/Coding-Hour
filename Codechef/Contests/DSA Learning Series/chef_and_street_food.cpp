#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N;
    cin>>N;
    int s,v,p,profit=INT_MIN;
    for(int i=0;i<N;i++) {
        cin>>s>>p>>v;
        s++;
        profit=max(profit,(p/s)*v);
    }
    cout<<profit<<endl;
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