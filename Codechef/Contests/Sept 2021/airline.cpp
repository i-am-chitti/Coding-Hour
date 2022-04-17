/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;


void solve(){
    ll A,B,C,D,E;
    cin>>A>>B>>C>>D>>E;

    if(A+B+C>D+E) cout<<"NO";
    else {
        if(A+B<D && C<E) cout<<"YES";
        else if(A+C<D && B<E) cout<<"YES";
        else if(B+C<D && A<E) cout<<"YES";
        else cout<<"NO";
    }

    cout<<"\n";

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