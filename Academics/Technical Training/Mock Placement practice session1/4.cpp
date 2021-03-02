#include<bits/stdc++.h>
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long 
using namespace std;

vector<vector<int>> dp(100,vector<int> (100,-1));
vector<vector<int>> direction {{1,0},{-1,0},{0,1},{0,-1}};

int dfs(vector<vector<int>> grid,int i,int j,int n)
{
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    int x,y;
    int res=0;
    for(int i=0;i<4;i++)
    {
        x=direction[i][0]+i;
        y=direction[i][1]+j;
        if(x<0 || y<0 || x>=n || y>=n)
        {
            continue;
        }
        if(grid[x][y]==1)
        {
            res+=dfs(grid,x,y,n);
        }
    }
    dp[i][j]=res+1;
    return dp[i][j];
}

void solve() {
    int t,n,k;
    int c,x,y;
    cin>>n;
    vector<vector<int>> grid(n,vector<int> (n));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
    }
    int res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j]==1)
            {
                t=dfs(grid,i,j,n);
                res=max(res,t);
            }
        }
    }
    cout<<"Largest path of 1's "<<res<<"\n";
}

int main() {
    fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}