/*
Write a method named findIntersect() that takes two unsorted arrays of integers as parameters and uses an approach based on merging to find and return the intersection of the two arrays. 
The order of elements remains unchanged.
*/
/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

vector<int> getIntersection(vector<int> &a, vector<int> &b, int n, int m) {
    unordered_map<int,int> mp;
    for(int i=0;i<m;i++) mp[b[i]]++;
    vector<int> res;
    int count=0;
    for(int i=0;i<n;i++) {
        if(mp[a[i]]!=0) {
            res.emplace_back(a[i]);
            count++;
            mp[a[i]]=0;
        }
    }
    cout<<count<<"\n";
    return res;
} 

void solve(){
    int N,M;
    cin>>N>>M;
    vector<int> A(N),B(M);
    for(int i=0;i<N;i++) cin>>A[i];
    for(int i=0;i<M;i++) cin>>B[i];
    vector<int> commonElm = getIntersection(A,B,N,M);
    for(int i=0;i<commonElm.size();i++) cout<<commonElm[i]<<" ";
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