/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;


void solve(){

    ll N,K;
    cin>>N>>K;

    priority_queue<ll> que;

    ll sum=0;

    for(int i=0;i<N;i++) {
        ll t;
        cin>>t;
        if(t>=0) sum+=t;
        else {
            if(K!=0) {
                if(que.size()<K) que.push(t);
                else {
                    if(que.top()>t) {
                        que.pop();
                        que.push(t);
                    }
                }
            }
        }
    }
    while(!que.empty()) {
        sum+=abs(que.top());
        que.pop();
    }
    cout<<sum<<"\n";

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