/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

int getCount(int n, int B) {
    int sum=0;
    while(n>0) {
        sum += n%B;
        n/=B;
    }
    return sum;
}

void solve(){
    int n, l, r;
    cin>>n>>l>>r;
    int ans=0;
    if(n>=l && n<=r) ans=n;
    else if(n<l) ans=l;
    else {
        int sum=INT_MAX;
        
        while((l<r) && (n/r < r)) {
            int t1=n/r;
            int t2=n%r;
            if(sum>t1+t2) {
                sum=t1+t2;
                ans=r;
            }
            r=n/(t1+1);
        }

        while(l<=r) {
            int t3=n;
            int sum2=0;
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