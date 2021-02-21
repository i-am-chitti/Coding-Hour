#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N,K;
    cin>>N>>K;
    vector<int> prices(N);
    for(int i=0;i<N;i++) cin>>prices[i];
    sort(prices.begin(),prices.end());
    int i=0,j=N-1;
    int minCost=0;
    while(i<=j) {
        minCost+=prices[i];
        j-=K;
        i++;
    }
    int maxCost=0;
    i=0;
    j=N-1;
    while(i<=j) {
        maxCost+=prices[j];
        j--;
        i+=K;
    }
    cout<<minCost<<" "<<maxCost<<endl;
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