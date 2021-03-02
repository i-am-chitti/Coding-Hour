#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int M,X,Y;
    cin>>M>>X>>Y;
    vector<int> cops(M);
    for(int i=0;i<M;i++) cin>>cops[i];
    sort(cops.begin(),cops.end());
    ll dist = X*Y;
    int last=1,res=0;
    for(int i=0;i<M && last<100;i++) {
        int lR=cops[i]-dist;
        int uR=cops[i]+dist;
        if(lR<1) lR=1;
        if(uR>100) uR=100;
        if(last<lR) {
            //cout<<lR<<" "<<uR<<"\n";
            if(last==1) res+=lR-last;
            else res+=lR-last-1;
        }
        last=uR; 
    }
    if(last<100)
        res+=100-last;
    cout<<res<<"\n";
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