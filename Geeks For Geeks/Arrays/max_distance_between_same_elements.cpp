#include<bits/stdc++.h>
using namespace std;

int maxDistance(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cout<<maxDistance(arr,n)<<endl;
    }
    return 0;
}// } Driver Code Ends


// your task is to complete this function
int maxDistance(int arr[], int n)
{
//Code here
    map<int,pair<int,int>> mp;
    for(int i=0;i<n;i++) {
        if(mp.find(arr[i])==mp.end()) {
            mp.insert({arr[i],{i,-1}});
        }
        else {
            mp[arr[i]].second=i;
        }
    }
    int maxDist=0;
    for(auto it=mp.begin();it!=mp.end();it++) {
        if(it->second.second!=-1) {
            maxDist=max(maxDist,it->second.second-it->second.first);
        }
    }
    return maxDist;
}