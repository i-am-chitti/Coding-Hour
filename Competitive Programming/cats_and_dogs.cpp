/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

bool myFun() {
        ll N,D,C,M,i;
        cin>>N>>D>>C>>M;
        string str;
        cin>>str;
        for(i=0;i<N;i++) {
            if(str[i]=='C') {
                C--;
                if(C<0) break;
            }
            else {
                D--;
                if(D<0) return false;
                C+=M;
            }
        }
        while(i<N) {
            if(str[i]=='D') return false;
            i++;
        }
        return true;
}

void solve(){

    ll T;
    cin>>T;

    for(ll t=1;t<=T;t++) {
        string res=myFun()?"YES":"NO";
        cout<<"Case #"<<t<<": "<<res<<"\n";
        
    }
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}