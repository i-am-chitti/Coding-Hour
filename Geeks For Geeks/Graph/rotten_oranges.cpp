/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

int orangesRotting(vector<vector<int>>& grid) {
    // Code here
    int R=grid.size();
    int C=grid[0].size();
    int res=0;
    queue<pair<int,int>> que;
    //get all rotten oranges
    for(int i=0;i<R;i++) {
        for(int j=0;j<C;j++) {
            if(grid[i][j]==2) {
                que.push(make_pair(i,j));
            }
        }
    }
    
    //a layer to distinguish layer of rotten from non-rotten oranges
    que.push(make_pair(-1,-1));
    while(!que.empty()) {
        bool hasSomethingRotten=0;
        while(que.front().first!=-1 && que.front().second!=-1) {
            int currI=que.front().first;
            int currJ=que.front().second;
            if(currI-1>=0 && currJ<C && grid[currI-1][currJ]==1) {
                // not yet rotten
                grid[currI-1][currJ]=2;
                que.push(make_pair(currI-1,currJ));
                if(!hasSomethingRotten) {
                    res++;
                    hasSomethingRotten=1;
                }
            }
            if(currI+1<R && currJ<C && grid[currI+1][currJ]==1) {
                // not yet rotten
                grid[currI+1][currJ]=2;
                que.push(make_pair(currI+1,currJ));
                if(!hasSomethingRotten) {
                    res++;
                    hasSomethingRotten=1;
                }
            }
            if(currI<R && currJ-1>=0 && grid[currI][currJ-1]==1) {
                // not yet rotten
                grid[currI][currJ-1]=2;
                que.push(make_pair(currI,currJ-1));
                if(!hasSomethingRotten) {
                    res++;
                    hasSomethingRotten=1;
                }
            }
            if(currI<R && currJ+1<C && grid[currI][currJ+1]==1) {
                // not yet rotten
                grid[currI][currJ+1]=2;
                que.push(make_pair(currI,currJ+1));
                if(!hasSomethingRotten) {
                    res++;
                    hasSomethingRotten=1;
                }
            }
            que.pop();
        }
        que.pop();
        if(!que.empty()) {
            que.push(make_pair(-1,-1));
        }
    }
    for(int i=0;i<R;i++) {
        for(int j=0;j<C;j++) {
            if(grid[i][j]==1) {
                return -1;
            }
        }
    }
    return res;
} 

void solve(){
    int R,C;
    cin>>R>>C;
    vector<vector<int>> arr(R,vector<int>(C));
    for(int i=0;i<R;i++) {
        for(int j=0;j<C;j++) {
            cin>>arr[i][j];
        }
    }
    cout<<orangesRotting(arr)<<"\n";
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