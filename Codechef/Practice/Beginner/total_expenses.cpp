#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    double quantity,price;
    cin>>quantity>>price;
    price*=quantity;
    if(quantity>100) {
        price=price-(price/10);
    }
    printf("%.6f\n",price);
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