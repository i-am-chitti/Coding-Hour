/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

int add(int a, int b) {
    if(b==0) return a;
    return add(a^b,(a&b)<<1);
}

int subtract(int a, int b) {
    if(b==0) return a;
    return subtract(a^b,((~a)&b)<<1);
}

void solve(){
    int a,b;
    cin>>a>>b;
    int ans=0;
    if(a>=0 && b>=0) ans=add(a,b);
    else if(a>=0 && b<0) ans=subtract(a,-b);
    else if(a<0 && b>=0) ans=subtract(b,-a);
    else ans=-add(-a,-b);
    cout<<ans<<endl;
}
 

int main()
{
    fast_cin();
    ll T;
    cin>>T;
    while(T) {
        solve();
        T--;
    }
    return 0;
}