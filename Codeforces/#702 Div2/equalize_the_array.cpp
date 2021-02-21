#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    map<int,int> mp;
    int currCount=1;
    for(int i=1;i<N;i++) {
        if(arr[i]==arr[i-1]) currCount++;
        else {
            mp[currCount]++;
            currCount=1;
        }
    }
    mp[currCount]++;
    auto jt=mp.begin();
    for(auto it=mp.begin();it!=mp.end();it++) {
        if(it->second>jt->second) jt=it;
        cout<<it->first<<" "<<it->second<<endl;
    }
    int minToBeDeleted=jt->first,tCount=0;
    for(auto it=mp.begin();it!=mp.end();it++) {
        if(it->second<minToBeDeleted) tCount+=it->second;
        else if(it->second>minToBeDeleted) tCount+=it->second-minToBeDeleted;
    }
    cout<<tCount<<endl;   
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