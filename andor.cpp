#include <bits/stdc++.h>
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mod 1000000007
using namespace std;

string getKey(int a, int b) {
	return to_string(a)+":"+to_string(b);
}

long long helper(vector<int> &arr, int idx, int prev, long long &res, string str, unordered_map<string,int> &mp, unordered_map<string,int> &dp) {
	if(idx>=arr.size()) {
		// cout<<str<<"\n";
		if(mp.find(str)==mp.end()) {
			mp[str]++;
			if(prev==1) return 1;
		}
		return 0;
	}
	string str1=getKey(idx,prev);
	if(dp.find(str1)!=dp.end()) return dp[str1];
	int x = (helper(arr,idx+1,prev&arr[idx],res,str+"&"+to_string(arr[idx]),mp,dp))%mod;
	int y = (helper(arr,idx+1,prev|arr[idx],res,str+"|"+to_string(arr[idx]),mp,dp))%mod;
	return dp[str1] = (x+y)%mod;
}

void solve() {
	int N;
	cin>>N;
	vector<int> arr(N);
	for(int i=0;i<N;i++) cin>>arr[i];

	string str=to_string(arr[0]);
	unordered_map<string,int> mp;
	long long res=0;
	unordered_map<string,int> dp;
	res = helper(arr,1,arr[0],res,str,mp,dp);
	cout<<res<<"\n";

}

int main() {
	// your code goes here
	fast_cin();
	int T;
	cin>>T;
	while(T--) {
		solve();
	}

	return 0;
}
