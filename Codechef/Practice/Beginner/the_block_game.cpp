#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    string s;
    cin>>s;
    bool flag=1;
    int N=s.length();
    for(int i=0;i<N/2;i++) {
        if(s[i]!=s[N-i-1]) {
            flag=0;
            break;
        }
    }
    if(flag) cout<<"wins\n";
    else cout<<"loses\n";
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