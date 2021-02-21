/*
	Author: Deepak kumar
	UID: 18BCS2295
	Path: academics/tech_training/
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

vector<vector<string>> getAnagramsTogether(vector<string> &stringList) {
    // my raw idea is to sort each string and create a map Table with key as sorted string as value as vector of those strings
    map<string,vector<string>> mp;
    int N=stringList.size();
    for(int i=0;i<N;i++) {
        string temp=stringList[i];
        sort(temp.begin(),temp.end());
        mp[temp].push_back(stringList[i]);
    }
    vector<vector<string>> res;
    for(auto it=mp.begin();it!=mp.end();it++) {
        vector<string> st;
        for(int i=0;i<it->second.size();i++) {
            st.push_back(it->second[i]);
        }
        res.push_back(st);
    }
    return res;
} 

void solve(){
    int N;
    cin>>N;
    vector<string> stringList(N);
    for(int i=0;i<N;i++) cin>>stringList[i];
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