#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N,K;
    cin>>N>>K;
    vector<int> cakes(N);
    vector<int> flavors(K,0);
    for(int i=0;i<N;i++) cin>>cakes[i];

    int j=0,nCakes=0,maxCakes=0;
    for(int i=0;i<N;i++) {
        flavors[cakes[i]-1]++;
        if(flavors[cakes[i]-1]==1) nCakes++;
        while(nCakes>=K) {
            flavors[cakes[j]-1]--;
            if(flavors[cakes[j]-1]==0) nCakes--;
            j++;
        }
        maxCakes=max(maxCakes,i-j+1);
    }
    cout<<maxCakes<<endl;

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