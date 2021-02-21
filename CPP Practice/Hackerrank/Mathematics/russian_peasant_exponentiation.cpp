#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll mod;

ll findMod(ll n) {
    return n%mod;
}

pair<ll,ll> multiplyComplexNumber(pair<ll,ll> c1, pair<ll,ll> c2) {
    ll ans = findMod((c1.first*c2.first) - (c1.second*c2.second));
    ll ansi = findMod((c1.second*c2.first) + (c1.first*c2.second));
    return make_pair(ans, ansi);
}

pair<ll,ll> power(pair<ll,ll> c, ll exp) {
    pair<ll,ll> res = make_pair(1,0);
    while(exp>0) {
        if(exp%2) res=multiplyComplexNumber(c, res);
        c=multiplyComplexNumber(c,c);
        exp/=2;
    }
    return res;
}

vector<ll> solve(ll a, ll b, ll k, ll m) {
    pair<ll,ll> input = make_pair(a,b);
    pair<ll,ll> output = power(input, k);
    vector<ll> res;
    res.push_back((output.first+mod)%mod);
    res.push_back((output.second+mod)%mod);
    return res;
}

int main() {
    ll q,a,b,k,m;
    cin>>q;
    for(ll i=0;i<q;i++) {
        cin>>a>>b>>k>>m;
        mod=m;
        vector<ll> res = solve(a,b,k,m);
        cout<<"Result = "<<res[0]<<" "<<res[1]<<endl;
    }
}