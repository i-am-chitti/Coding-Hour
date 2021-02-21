#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N,D;
    cin>>N>>D;
    vector<int> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    if(D>=N) D%=N;
    for(int i=D;i<N;i++) cout<<arr[i]<<" ";
    for(int i=0;i<D;i++) cout<<arr[i]<<" ";
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