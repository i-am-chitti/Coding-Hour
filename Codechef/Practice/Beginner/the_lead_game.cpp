#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
typedef vector<int> vec;
 

void solve(){
}
 

int main()
{
    fast_cin();
    ll T;
    cin >> T;
    ll t,s1=0,s2=0,max1=0,max2=0;
    for(int i=1;i<=T;i++) {
        cin>>t;
        s1+=t;
        cin>>t;
        s2+=t;
        if(s1>s2) max1=max(max1,s1-s2);
        else max2=max(max2,s2-s1);
    }
    if(max1>max2) cout<<"1 "<<max1;
    else cout<<"2 "<<max2;
    return 0;
}