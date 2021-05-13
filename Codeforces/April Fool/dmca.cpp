/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    ll num;
    cin>>num;
    while(num>=10) {
        ll sum=0;
        while(num>0) {
            sum+=num%10;
            num/=10;
        }
        num=sum;
    }
    cout<<num;
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}