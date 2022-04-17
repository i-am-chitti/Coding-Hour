/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;


void solve(){
    int N;
    cin>>N;
    if(N&1) {
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) {
                if(i==j) cout<<"1 ";
                else cout<<"-1 ";
            }
            cout<<"\n";
        }
    }
    else {
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) cout<<"-1 ";
            cout<<"\n";
        }
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