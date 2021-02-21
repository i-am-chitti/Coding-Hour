#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 
int arr[]={1,2,5,10,50,100};

void solve(){
    int i,N,count=0;
    cin>>N;
    count+=N/100;
    N%=100;
    count+=N/50;
    N%=50;
    count+=N/10;
    N%=10;
    count+=N/5;
    N%=5;
    count+=N/2;
    N%=2;
    count+=N;
    cout<<count;
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