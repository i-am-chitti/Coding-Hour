/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

int bfs(vector<vector<int>> &graph, int src, int dest, int *parent, int N) {
    bool visited[N];
    memset(visited, 0, sizeof(visited));
  
    // Create a queue, enqueue source vertex and mark source vertex
    // as visited
    queue <int> q;
    q.push(src);
    visited[src] = true;
    parent[src] = -1;
  
    // Standard BFS Loop
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
  
        for (int v=0; v<N; v++)
        {
            if (visited[v]==false && graph[u][v] > 0)
            {
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }
    return (visited[dest] == true);
}

void dfs(vector<vector<int>> graph, int src, bool *visited, int N)
{
    visited[src] = true;
    for (int i = 0; i < N; i++)
       if (graph[src][i] && !visited[i])
           dfs(graph, i, visited, N);
}

void minCut(vector<vector<int>> graph, int src, int dest, int N, unordered_map<int,int> &indexToId)
{
    int u, v;
    vector<vector<int>> rGraph(N, vector<int>(N));
    for (u = 0; u < N; u++)
        for (v = 0; v < N; v++)
             rGraph[u][v] = graph[u][v];
  
    int parent[N];
  
    while (bfs(rGraph, src, dest, parent, N))
    {
        int path_flow = INT_MAX;
        for (v=dest; v!=src; v=parent[v])
        {
            u = parent[v];
            path_flow = min(path_flow, rGraph[u][v]);
        }
        for (v=dest; v != src; v=parent[v])
        {
            u = parent[v];
            rGraph[u][v] -= path_flow;
            rGraph[v][u] += path_flow;
        }
    }
  
    bool visited[N];
    memset(visited, false, sizeof(visited));
    dfs(rGraph, src, visited, N);
    for (int i = 0; i < N; i++)
      for (int j = 0; j < N; j++)
         if (visited[i] && !visited[j] && graph[i][j]) {
             if(j==dest) {
                 cout<<indexToId[i];
             }
             else cout<<indexToId[j];
             cout<<" ";
         }
  
    return;
}


void solve(){
    int N,t,p,q;
    cin>>N;
    unordered_map<int,int> members;
    unordered_map<int,int> indexToId;
    for(int i=0;i<N;i++) {
        cin>>t;
        members[t]=i;
        indexToId[i]=t;
    }
    vector<vector<int>> graph(N, vector<int> (N, 0));
    ll E;
    cin>>E;
    for(int i=0;i<E;i++) {
        cin>>p>>q;
        graph[members[p]][members[q]]=1;
    }
    ll source,dest;
    cin>>source;
    cin>>dest;
    minCut(graph, members[source], members[dest], N, indexToId);
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