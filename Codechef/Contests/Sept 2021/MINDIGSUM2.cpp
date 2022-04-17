/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

ll getCount(ll n, ll B) {
    ll sum=0;
    while(n>0) {
        sum += n%B;
        n/=B;
    }
    return sum;
}

void solve(){
    ll n, r;
    cin>>n>>r;
    ll l=2;
    ll ans=0;
    if(n>=l && n<=r) ans=n;
    else if(n<l) ans=l;
    else {
        ll sum=LONG_LONG_MAX;
        
        while((l<r) && (n/r < r)) {
            ll t1=n/r;
            ll t2=n%r;
            if(sum>t1+t2) {
                sum=t1+t2;
                ans=r;
            }
            r=n/(t1+1);
        }

        while(l<=r) {
            ll t3=n;
            ll sum2=0;
            while(true) {
                if(t3<l) {
                    sum2+=t3;
                    if(sum2<sum) {
                        ans=l;
                        sum=sum2;
                    }
                    break;
                }
                sum2 += t3%l;
                t3/=l;
                if(sum2 >= sum) break;
            }
            l++;
        }
    }
    cout<<ans<<"\n";
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