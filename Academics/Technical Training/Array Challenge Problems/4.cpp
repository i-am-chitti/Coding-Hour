/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int nDays=365;
    vector<bool> birthdates(nDays+1,0);
    int nPeople=0;
    while(true) {
        nPeople++;
        int d = rand()/(RAND_MAX/nDays);
        if(birthdates[d]) break;
        birthdates[d]=1;
    }
    cout<<nPeople<<"\n";
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