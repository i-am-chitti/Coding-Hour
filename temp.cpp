/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 
bool isSumPossible(vector<int> &arr, int target) {
    if(target==0) return 1;
    else if(target<0) return 0;
    for(int i=0;i<arr.size();i++) {
        if(isSumPossible(arr,target-arr[i])) return 1;
    }
    return 0;
}

void allSums(vector<int> &arr, int target, vector<int> &temp, vector<vector<int>> &res, int i) {
    if(target==0) res.push_back(temp);
    else if(target<0) return;
    while(i<arr.size() && target>=arr[i]) {
        temp.push_back(arr[i]);
        allSums(arr,target-arr[i],temp,res,i);
        temp.pop_back();
        i++;
    }
}

void solve(){
    vector<int> arr{2,3,5};
    int target = 8;
    // if(isSumPossible(arr,target)) cout<<"YES\n";
    // else cout<<"NO\n";
    vector<int> temp;
    vector<vector<int>> res;
    allSums(arr,target,temp,res,0);
    for(int i=0;i<res.size();i++) { 
        for(int j=0;j<res[i].size();j++)
            cout<<res[i][j]<<" ";
        cout<<endl;
    }
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}