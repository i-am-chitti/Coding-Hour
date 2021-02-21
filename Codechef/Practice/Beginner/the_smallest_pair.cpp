#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N,min1=INT_MAX,min2=INT_MAX;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++) {
        cin>>arr[i];
        min1=min(min1,arr[i]);
    }
    for(int i=0;i<N;i++) {
        if(arr[i]>min1) {
            min2=min(min2,arr[i]);
        }
    }
    cout<<min1+min2<<endl;
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