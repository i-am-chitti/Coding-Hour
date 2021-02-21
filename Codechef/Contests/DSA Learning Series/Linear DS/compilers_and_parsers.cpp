#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    string expr;
    cin>>expr;
    int balance=0,N=expr.length(),maxLength=0;
    for(int i=0;i<N;i++) {
        if(expr[i]=='<') balance++;
        else {
            balance--;
            if(balance<0) break;
            else if(balance==0) {
                maxLength=i+1;
            }
        }
    }
    cout<<maxLength<<endl;
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