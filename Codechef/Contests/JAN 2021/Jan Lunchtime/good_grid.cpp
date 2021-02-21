#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N,X;
    cin>>N>>X;
    if(X==1) {
        cout<<"Yes"<<endl;
        return;
    }
    else if(X>pow(N,2)) {
        cout<<"No"<<endl;
        return;
    }
    bool flag=0;
    for(int i=N;i>1;i--) {
        if(X%i==0) {
            flag=1;
            break;
        }
    }
    if(flag) cout<<"Yes";
    else cout<<"No";
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