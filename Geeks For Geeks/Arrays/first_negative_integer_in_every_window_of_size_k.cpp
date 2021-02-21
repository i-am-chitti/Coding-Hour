#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int K,N;
    cin>>N;
    vector<int> arr(N);
    vector<int> aux;
    for(int i=0;i<N;i++) {
        cin>>arr[i];
        if(arr[i]<0) aux.push_back(i);
    }
    cin>>K;
    for(int i=0;i<=N-K;i++) {
        auto it=lower_bound(aux.begin(),aux.end(),i);
        int j=*it;
        if(j>=i+K) cout<<0<<" ";
        else cout<<arr[j]<<" ";
    }
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