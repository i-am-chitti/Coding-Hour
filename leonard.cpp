/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;


void solve(){

	ll N;
	cin>>N;
	vector<ll> arr(N);
	for(ll i=0;i<N;i++) cin>>arr[i];

	unordered_map<ll,ll> mp;
	vector<ll> aux;
	for(ll i=0;i<N;i++) {
		if(mp.find(arr[i])==mp.end()) aux.push_back(arr[i]);
		mp[arr[i]]++;
	}

	unordered_map<ll,vector<ll>> mp1;
	for(int i=0;i<aux.size();i++) {
		if(mp1.find(mp[aux[i]])==mp1.end()) mp1[mp[aux[i]]] = {aux[i]};
		else mp1[mp[aux[i]]].push_back(aux[i]);
	}

	int Q;
	cin>>Q;
	while(Q--) {
		int a;
		ll b;
		cin>>a>>b;
		ll res=0;
		if(a==0) {
			for(ll i=0;i<aux.size();i++) {
				if(mp[aux[i]]>=b) {
					res=aux[i];
					break;
				}
			}
		} else {
			if(mp1.find(b)!=mp1.end()) {
				res=mp1[b][0];
			}
		}
		cout<<res<<"\n";

	}


}


int main()
{
    fast_cin();
        solve();
    return 0;
}
