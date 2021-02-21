#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(int N){
    int rev=0;
    while(N>0) {
        rev=rev*10+(N%10);
        N/=10;
    }
    cout<<rev<<endl;
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