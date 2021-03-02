#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    ll M,H;
    cin>>M>>H;
    ll BMI = M/(H*H);
    if(BMI<=18) cout<<1;
    else if(BMI>18 && BMI<25) cout<<2;
    else if(BMI>24 && BMI<30) cout<<3;
    else if(BMI>=30) cout<<4;
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