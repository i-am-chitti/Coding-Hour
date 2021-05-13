/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;


void solve(){
    ll N,Q,temp;
    cin>>N>>Q;
    vector<ll> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    reverse(arr.begin(),arr.end());
    while(Q--) {
        cin>>temp;
        int i=N-1;
        for(;i>=0;i--) {
            if(arr[i]==temp) break;
        }
        arr.erase(arr.begin()+i);
        cout<<N-i<<" ";
        arr.push_back(temp);
    }
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}