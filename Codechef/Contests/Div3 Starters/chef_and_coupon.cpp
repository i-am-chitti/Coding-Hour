#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int D,C,A1,A2,A3,B1,B2,B3;
    cin>>D>>C>>A1>>A2>>A3>>B1>>B2>>B3;
    ll Asum=A1+A2+A3;
    ll Bsum=B1+B2+B3;
    ll tSum;
    if(Asum>=150 && Bsum>=150) {
        tSum=Asum+Bsum+(2*D);
        if(Asum+Bsum+C<tSum) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else {
        if(Asum>=150 || Bsum>=150) {
            tSum=Asum+Bsum;
            if(tSum+C+D<tSum+(2*D)) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
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