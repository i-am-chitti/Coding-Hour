/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

void addEdge(vector<int> adj[], int src, int dest) {
    adj[src].push_back(dest);
}

int transposeGraph(vector<int> adj[], int V) {
    vector<int> revAdj[V];
    for(int i=0;i<V;i++) {
        for(int j=0;j<adj[i].size();j++) {
            addEdge(revAdj, adj[i][j], i);
        }
    }
    pair<int, int> p({-1,INT_MIN});
    for(int i=0;i<V;i++) {
        int count=0;
        for(int j=0;j<revAdj[i].size();j++) {
            count+=revAdj[i][j];
        }
        if(count>p.second) {
            p.first=i;
            p.second=count;
        }
    }
    return p.first;
}

void solve(){
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++) {
        cin>>arr[i];
    }
    int V=arr.size();
    vector<int> adj[V];
    for(int i=0;i<V;i++) {
        if(arr[i]!=-1) addEdge(adj,i,arr[i]);
    }
    cout<<transposeGraph(adj,V);
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}