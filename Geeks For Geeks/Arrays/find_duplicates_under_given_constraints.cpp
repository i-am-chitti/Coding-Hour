#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    vector<int> arr(10);
    for(int i=0;i<10;i++) cin>>arr[i];
    if(arr[4]==arr[5]) cout<<arr[4];
    else {
        if(arr[3]==arr[4]) cout<<arr[4];
        else cout<<arr[5];
    }
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