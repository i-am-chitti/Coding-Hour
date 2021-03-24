/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    double a = ((double)rand())/((double)RAND_MAX/(2*M_PI));
    cout<<cos(a)<<" "<<sin(a)<<"\n";
}
 

int main()
{
    srand(time(0));
    fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}