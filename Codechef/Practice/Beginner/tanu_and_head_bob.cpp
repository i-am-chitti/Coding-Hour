#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int n;
    cin>>n;
    char c;
    int Y=0,N=0,I=0;
    for(int i=0;i<n;i++) {
        cin>>c;
        if(c=='Y') Y++;
        else if(c=='N') N++;
        else if(c=='I') I++;
    }
    string notIndian="NOT INDIAN",indian="INDIAN",notSure="NOT SURE";
    if(N>0) {
        if(Y>0 && I==0) cout<<notIndian;
        else if(I>0 && Y==0) cout<<indian;
        else cout<<notSure;
    }
    else {
        if(Y>0 && I==0) cout<<notIndian;
        else if(Y==0 && I>0) cout<<indian;
        else cout<<notSure;
    }
    cout<<endl;
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