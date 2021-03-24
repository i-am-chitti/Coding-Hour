/*
Author : Deepak Kumar
UID: 18BCS2295
*/
//DP Approach
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

bool recur(string s, string t, int sBegin, int tBegin, vector<vector<int>> &dp) {
    if(dp[sBegin][tBegin]!=-1) return dp[sBegin][tBegin];
    if(sBegin==s.length()) return 1;
    if(tBegin>=t.length()) return 0;
    bool isTrue=0;
    if(s[sBegin]==t[tBegin]) isTrue=recur(s,t,sBegin+1,tBegin+1,dp);
    if(isTrue) {
        dp[sBegin][tBegin]=1;
    }
    else dp[sBegin][tBegin] = recur(s,t,sBegin,tBegin+1,dp);
    return dp[sBegin][tBegin];
    
}
bool isSubsequence(string s, string t) {
    if(t.length()<s.length()) return 0;
    vector<vector<int>> dp(s.length()+1,vector<int>(t.length()+1,-1));
    return recur(s,t,0,0,dp);
} 

void solve(){
    if(isSubsequence("abc","ahbgdc")) cout<<"YES";
    else cout<<"NO";
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}