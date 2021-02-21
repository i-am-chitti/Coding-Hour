#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 
void checkPreorder(vector<int> &arr, int l, int h, int n, int &N) {
    if(l>h || N==n|| arr[N]<l || arr[N]>h) return;
    int curr=arr[N];
    N++;
    checkPreorder(arr,l,curr-1,n,N);
    checkPreorder(arr,curr+1,h,n,N);
}

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int res=0;
    checkPreorder(arr,INT_MIN,INT_MAX,n,res);
    cout<<(res==n)<<endl;
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