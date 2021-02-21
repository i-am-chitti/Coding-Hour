#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    ll N,Q,M;
    cin>>N>>Q>>M;
    vector<ll> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    ll nWins=0;
    ll l,r;
    while(Q--) {
        cin>>l>>r;
        l--;
        r--;
        if(arr[l]>M) continue;
        else if(arr[l]<=M && arr[r]<=M) nWins++;
        else if(arr[l]<=M && arr[r]>M) {
            ll pileLength=M, nGames=0;
            while(arr[l]<=pileLength) {
                int i=r;
                while(i>=l && arr[i]>pileLength) i--;
                pileLength-=arr[i];
                nGames++;
            }
            if(nGames&1) nWins++;
        }
    }
    cout<<nWins<<endl;

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