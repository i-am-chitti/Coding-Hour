#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void maxGold(ll p, ll q, ll n, vector<ll> alien, vector<ll> gold){
    if(n == 2)
    {
        if((alien[0]<p && alien[1]<p && alien[0]<q && alien[1]<q) || (alien[0]>p && alien[1]<2*p && alien[0]<q && alien[1]<q))
        {
            cout<<max(gold[0],gold[1]);
        }
        else
        {
            cout<<"0";
        }
    }
    else
    {
        ll val = p/q;
        if(val%2!=0 || val==0)
        {
            sort(gold.begin(), gold.end());
            ll s=0;
            for (ll i = 1; i <n ; i++) {
                s += gold[i];
            }
            cout<<s;
        }
        else
        {
            ll s=0;
            for (ll i = 0; i <n ; i++) {
                s += gold[i];
            }
            cout<<s;
        }
    }

}
ll main(){
    ll asha,amar,n;
    cin>>asha>>amar>>n;
    vector<ll> alien,gold;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        alien.push_back(x);
        gold.push_back(y);
    }
    maxGold(asha,amar,n,alien,gold);
    return 0;
}