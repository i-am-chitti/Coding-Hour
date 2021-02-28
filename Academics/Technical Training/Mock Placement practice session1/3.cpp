#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N;
    cin>>N;
    vector<int> arr1(N),arr2(N);
    for(int i=0;i<N;i++) cin>>arr1[i];
    for(int i=0;i<N;i++) cin>>arr2[i];
    vector<int> diffArr(N,0);
    for(int i=0;i<N;i++) diffArr[i]=arr1[i]-arr2[i];
    unordered_map<int,int> auxMP;
    int sum=0,currI=0,currJ=0,currLen=0;
    for(int i=0;i<N;i++) {
        sum+=diffArr[i];
        if(sum==0) {
            currLen=i+1;
        }
        if(auxMP.find(sum)!=auxMP.end()) {
            if(currLen<(i-auxMP[sum])) {
                currJ=i-auxMP[sum];
                currLen=i-auxMP[sum];
                currI=currJ-currLen+1;
            }
        }
        else {
            auxMP[sum]=i;
        }
    }
    cout<<"from "<<currI<<" to "<<currJ<<"\n";
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