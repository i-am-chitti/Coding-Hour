#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;



void solve(){
    ll N;
    cin>>N;
    ll b=4,c=5,a;
    ll count=0;
    while(c<=N) {
        a=(c*c)-(b*b);
        if(((c*c)-c)==((b*b)+b) && (sqrt(a)*sqrt(a)==a)) {
            count++;
        }
        b+=2;
        c+=2;
    }
    cout<<count<<endl;
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