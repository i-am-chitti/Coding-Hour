#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int t,N;
    cin>>N;
    vector<int> introSongDuration(N);
    for(int i=0;i<N;i++) cin>>introSongDuration[i];
    ll tDuration=0;
    for(int j=0;j<N;j++) {
        int E;
        cin>>E;
        ll episodesDuration=0;
        for(int i=0;i<E;i++) {
            cin>>t;
            episodesDuration+=t-introSongDuration[j];
        }
        episodesDuration+=introSongDuration[j];
        tDuration+=episodesDuration;
    }
    cout<<tDuration<<"\n";
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