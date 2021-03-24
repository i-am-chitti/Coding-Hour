/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

int threeSumMulti(vector<int>& arr, int target) {
    vector<pair<int,int>> aux;
    int N=arr.size();
    sort(arr.begin(),arr.end());
    int i=0,j,k;
    while(i<N) {
        j=i+1;
        while(j<N && arr[i]==arr[j]) j++;
        aux.push_back(make_pair(arr[i],j-i));
        i=j;
    }
    N=aux.size();
    unordered_map<int,int> mp;
    for(i=0;i<N;i++) {
        cout<<aux[i].first<<" "<<aux[i].second<<"\n";
        mp[aux[i].first]=aux[i].second;
    }
    vector<vector<int>> res;
    int ans=0,n;
    for(i=0;i<N-1;i++) {
        j=i+1;
        k=N-1;
        while(j<k) {
            int allDiffSum = aux[i].first+aux[j].first+aux[k].first;
            if(allDiffSum==target) {
                res.push_back({aux[i].first,aux[j].first,aux[k].first});
                ans+=aux[i].second*aux[j].second*aux[k].second;
                j++;
                k--;
            }
            else if(allDiffSum>target) k--;
            else j++;
        }
    }
    for(auto it=mp.begin();it!=mp.end();it++) {
        n=it->first;
        if(it->second>=2 && (target-(2*n))!=n && mp.find(target-(2*n))!=mp.end()) {
            res.push_back({n,n,target-(2*n)});
            n=it->second;
            ans+=((n*(n-1))/2)*mp[target-(2*it->first)];
        }
        if(it->second>=3 && 3*n==target) {
            res.push_back({n,n,n});
            n=it->second;
            ans+=(n*(n-1)*(n-2))/6;
        }
    }
    for(i=0;i<res.size();i++) {
        cout<<res[i][0]<<" "<<res[i][1]<<" "<<res[i][2]<<"\n";
    }
    cout<<ans<<"\n";
} 

void solve(){
    //vector<int> arr{1,1,2,2,3,3,4,4,5,5};
    //threeSumMulti(arr,8);
    //vector<int> arr{1,1,2,2,2,2};
    //threeSumMulti(arr,5);
    vector<int> arr{0,0,0};
    threeSumMulti(arr,0);
}
 

int main()
{
    //fast_cin();
    // ll T;
    // cin >> T;
    // while(T--) {
        solve();
    //}
    return 0;
}