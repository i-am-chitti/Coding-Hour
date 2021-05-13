/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
}

void dfs(vector<int> adj[], vector<bool> &visited, vector<int> &dist, int node, int d, int src) {
    visited[node]=1;
    for(auto it: adj[node]) {
        if(!visited[it]) dfs(adj,visited,dist,it,d+1,src);
        else if(it==src) dist[it]=max(dist[it],d+1);
    }
    visited[node]=false;

}

int myFun(vector<int> arr) {
    int V=arr.size();
    vector<int> adj[V];
    for(int i=0;i<V;i++) {
        if(arr[i]!=-1) addEdge(adj,i,arr[i]);
    }
    vector<bool> visited(V,0);
    vector<int> dist(V,0);
    for(int i=0;i<V;i++) {
        dfs(adj,visited,dist,i,0,i);
    }
    int ans=-1;
    for(int i=0;i<V;i++) {
        ans=max(ans,dist[i]);
    }
    return ans;

} 

void solve(){
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++) {
        cin>>arr[i];
    }
    cout<<myFun(arr);
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