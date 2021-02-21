#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(int N){
    int count=0;
    while(N>0) {
        if(N%10 == 4) count++;
        N/=10;
    }
    cout<<count<<endl;
}

int main()
{
    fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        ll N;
        cin>>N;
        solve(N);
    }
    return 0;
}