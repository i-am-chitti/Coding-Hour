/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

void recur(vector<string> arr, int H, int W, int currX, int currY, int currCount, int &ans) {
    if(currX>H || currY>W) return;
    if(arr[currX][currY]=='*') currCount++;
    if(currX==H && currY==W) {
        ans=max(ans,currCount);
        return;
    } 
    recur(arr,H,W,currX+1,currY,currCount,ans);
    recur(arr,H,W,currX,currY+1,currCount,ans);
} 

void solve(){
    int H,W;
    cin>>H>>W;
    vector<string> arr;
    for(int i=0;i<H;i++) {
        string str;
        cin>>str;
        arr.push_back(str);
    }
    int ans=0;
    recur(arr,H-1,W-1,0,0,0,ans);
    cout<<ans;
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