#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N,K;
    cin>>N>>K;
    int arr[N];
    for(int i=0;i<N;i++) cin>>arr[i];
    for(int i=0;i+K<=N;i+=K) {
        sort(arr+i,arr+i+K);
    }
    for(int i=0;i<N;i++) cout<<arr[i]<<" ";
    cout<<endl;
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