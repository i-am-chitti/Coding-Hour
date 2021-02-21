#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    ll N,painStrength,t;
    cin>>N>>painStrength;
    set<ll,greater<ll>> st;
    for(int i=0;i<N;i++) {
        cin>>t;
        st.insert(t);
    }
    ll count=0,temp=*st.begin();
    while(!st.empty()) {
        //cout<<painStrength<<" "<<temp<<endl;
        painStrength-=temp;
        count++;
        if(painStrength<=0) break;
        st.erase(st.begin());
        if(temp/2!=0)
            st.insert(temp/2);
        //cout<<painStrength<<" "<<*st.begin()<<endl;
        temp=*st.begin();
    }
    if(painStrength<=0) cout<<count<<endl;
    else cout<<"Evacuate\n";
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