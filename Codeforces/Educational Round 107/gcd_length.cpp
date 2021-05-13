/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

ll getNumber(ll digit) {
    if(digit==1) return 1;
    return pow(10,digit-1);
}

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll x=getNumber(a);
    ll y=getNumber(b)+getNumber(c);
    cout<<x<<" "<<y<<"\n";
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