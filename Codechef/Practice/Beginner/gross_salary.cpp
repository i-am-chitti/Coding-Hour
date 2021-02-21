#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    double bSalary;
    cin>>bSalary;
    if(bSalary<1500) {
        bSalary+=(bSalary/10)+(bSalary*0.9);
    }
    else bSalary+=500+(bSalary*0.98);
    cout<<fixed<<setprecision(2)<<bSalary<<endl;
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