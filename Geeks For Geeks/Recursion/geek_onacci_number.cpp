#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int temp,A,B,C,N;
    cin>>A>>B>>C>>N;
    while(N>3) {
        temp=A+B+C;
        A=B;
        B=C;
        C=temp;
        N--;
    }
    cout<<C<<endl;
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