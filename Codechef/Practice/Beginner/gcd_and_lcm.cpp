#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

int findGCD(ll A, ll B) {
    if(B==0) return A;
    return findGCD(B,A%B);
} 

void solve(){
    ll A,B;
    cin>>A>>B;
    ll GCD=findGCD(A,B);
    ll LCM=(A*B)/GCD;
    cout<<GCD<<" "<<LCM<<endl;
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