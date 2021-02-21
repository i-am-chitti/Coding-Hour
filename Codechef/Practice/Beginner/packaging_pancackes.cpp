#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(int N){
    int left=0,package=0;
    for(int i=1;i<=N;i++) {
        if(N%i>=left) {
            package=i;
            left=N%i;
        }
    }
    cout<<package<<endl;
}
 

int main()
{
    fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        int N;
        cin>>N;
        solve(N);
    }
    return 0;
}