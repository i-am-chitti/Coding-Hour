#include <bits/stdc++.h>
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef unsigned long long int ll;
 
const ll mod = 998244353;

void solve(){
    ll N,Q;
    cin>>N;
    vector<ll> vec(N);
    for(int i=0;i<N;i++) cin>>vec[i];
    cin>>Q;
    vector<int> queries(Q);
    for(int i=0;i<Q;i++) cin>>queries[i];
    
    //sequence generation
    ll nSequences=pow(2,N),localXOR=0,n;
    vector<int> sums(N+1,0);
    for(int i=1;i<nSequences;i++) {
        localXOR=0;
        n=0;
        for(int j=0;j<N;j++) {
            if(i&(1<<j)) {
                n++;
                localXOR=((localXOR%mod)^(vec[j]%mod)) % mod;
            }
        }
        sums[n]=((sums[n]%mod)+(localXOR%mod)) % mod;
    }
    for(int i=1;i<=N;i++) sums[i]=((sums[i-1]%mod)+(sums[i]%mod)) % mod;

    cout<<endl;
    for(int i=0;i<N+1;i++) cout<<sums[i]<<" ";

    // for(int i=0;i<Q;i++) {
    //     cout<<sums[queries[i]]<<endl;
    // }
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}