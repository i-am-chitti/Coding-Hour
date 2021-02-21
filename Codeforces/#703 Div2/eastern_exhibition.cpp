#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

long long getNumberOfGoodPoints(vector<int> arr) {
    sort(arr.begin(),arr.end());
    int N=arr.size();
    return arr[N/2]-arr[(N-1)/2]+1;
} 

void solve(){
    int N;
    cin>>N;
    vector<int> X(N), Y(N);
    for(int i=0;i<N;i++) cin>>X[i]>>Y[i];
    cout<<getNumberOfGoodPoints(X)*getNumberOfGoodPoints(Y)<<"\n";
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