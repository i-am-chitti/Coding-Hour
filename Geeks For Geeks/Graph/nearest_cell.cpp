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

int bfs(vector<int> adj[], int V, int c1, int c2) {
    vector<bool> visited1(V,0);
    vector<bool> visited2(V,0);
    queue<int> q1,q2;
    q1.push(c1);
    q2.push(c1);
    unordered_map<int,int> mp;
    while(!q1.empty() && !q2.empty()) {
        c1=q1.front();
        q1.pop();
        c2=q2.front();
        q2.pop();
        for(auto it=adj[c1].begin();it!=adj[c1].end();it++) {
            if(visited2[*it]) {
                cout<<*it<<"\n";
                return *it;
            }
            if(!visited1[*it]) {
                visited1[*it]=1;
                q1.push(*it);
            }
        }
        for(auto it=adj[c2].begin();it!=adj[c2].end();it++) {
            if(visited1[*it])  {
                cout<<"asdf"<<*it<<"\n";
                return *it;
            }
            if(!visited2[*it]) {
                visited2[*it]=1;
                q2.push(*it);
            }
        }
    }
    return -1;
}

void myFun(vector<int> arr) {
    int V=arr.size();
    vector<int> adj[V];
    for(int i=0;i<V;i++) {
        if(arr[i]!=-1) addEdge(adj,i,arr[i]);
    }
    cout<<bfs(adj,V,9,2);

} 

void solve(){
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++) {
        cin>>arr[i];
    }
    myFun(arr);
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