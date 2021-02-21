#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N;
    cin>>N;
    vector<ll> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    int i=N-1;
    ll maxTokens=0,lastToken=0;
    while(i>=0) {
        int minIndex=i;
        for(int j=i-1;j>=0;j--) {
            if(arr[j]<arr[minIndex]) minIndex=j;
        }
        maxTokens+=(i-minIndex+1)*arr[minIndex];
        i=minIndex-1;
    }
    cout<<maxTokens<<endl;
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