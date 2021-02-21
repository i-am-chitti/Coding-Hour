#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    ll count=0;
    int maximum,minimum;
    for(int i=1;i<N;i++) {
        maximum=max(arr[i],arr[i-1]);
        minimum=min(arr[i],arr[i-1]);
        if(maximum>2*minimum) {
            bool isSwapped=0;
            if(arr[i-1]>arr[i]) {
                isSwapped=1;
                swap(arr[i-1],arr[i]);
            }
            int temp=arr[i-1];
            while((2*temp)<arr[i]) {
                temp*=2;
                count++;
            }
            if(isSwapped) swap(arr[i-1],arr[i]);
        }
    }
    cout<<count<<"\n";
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