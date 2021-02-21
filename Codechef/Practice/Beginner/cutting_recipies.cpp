#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

int findGCD(int A, int B) {
    if(B==0) return A;
    return findGCD(B,A%B);
} 

void solve(){
    int N,GCD;
    cin>>N;
    vector<int> vec(N);
    for(int i=0;i<N;i++) cin>>vec[i];
    GCD=findGCD(vec[0],vec[1]);
    for(int i=2;i<N;i++) {
        if(GCD>vec[i]) GCD=findGCD(GCD,vec[i]);
        else if(GCD<vec[i]) GCD=findGCD(vec[i],GCD);
    }
    for(int i=0;i<N;i++) {
        vec[i]/=GCD;
        cout<<vec[i]<<" ";
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