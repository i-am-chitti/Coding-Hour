#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    vector<ll> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int k=1;
    ll ans=0;
    for(int i=0;i<N-1;) {
        k=1;
        if(arr[i]!=arr[i+1]) {
            i++;
            continue;
        }
        else {
            while(i<N-1 && arr[i]==arr[i+1]) {
                k++;
                i++;
            }
            ans+=(k*(k-1))/2;
        }
    }
    cout<<ans; 
}