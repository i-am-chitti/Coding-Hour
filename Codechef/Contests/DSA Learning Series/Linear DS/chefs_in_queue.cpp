#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mod 1000000007
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N,K;
    cin>>N>>K;
    vector<int> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    ll fearfulness=1;
    stack<int> stck;
    for(int i=1;i<N;i++) {
        if(stck.empty() || arr[stck.top()]<=arr[i]) stck.push(i);
        else {
            while(!stck.empty() && arr[stck.top()]>arr[i]) {
                fearfulness = ((fearfulness%mod) * ((i-stck.top()+1)%mod));
                stck.pop();
            }
            stck.push(i);
        }
    }
    cout<<fearfulness<<endl;
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}