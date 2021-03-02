#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    bool isRainbow=1;
    int i=0,j=N-1;
    int curr=1;
    if(arr[0]!=1) isRainbow=0;
    else {
        while(i<=j) {
            if(arr[i]-curr<=1) {
                if(arr[i]-curr==1) curr++;
            }
            else {
                isRainbow=0;
                break;
            }
            if(arr[i]!=arr[j] || arr[i]>7 || arr[j]>7) {
                isRainbow=0;
                break;
            }
            i++;
            j--;
        }
    }
    if(arr[N/2]!=7) isRainbow=0;
    if(isRainbow) cout<<"yes\n";
    else cout<<"no\n";
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