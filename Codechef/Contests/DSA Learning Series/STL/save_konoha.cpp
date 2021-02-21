#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

void solve(){
    ll N,painStrength,t,soldierStrength;
    cin>>N>>painStrength;
    // set<pair<int,int>> st;
    // for(int i=0;i<N;i++) {
    //     cin>>t;
    //     st.insert({t,i});
    // }
    // ll count=0;
    // while(painStrength>0) {
    //     pair<int,int> p=*st.rbegin();
    //     if(p.first==0) break;
    //     auto end=st.end();
    //     st.erase(--end);
    //     painStrength-=p.first;
    //     count++;
    //     st.insert({p.first/2, p.second});
    // }
    // if(painStrength>0) cout<<"Evacuate\n";
    // else cout<<count<<endl;

    priority_queue<int> pq;
    for(int i=0;i<N;i++) {
        cin>>t;
        pq.push(t);
    }
    ll count=0;
    while(painStrength>0) {
        soldierStrength=pq.top();
        if(soldierStrength==0) break;
        pq.pop();
        painStrength-=soldierStrength;
        count++;
        pq.push(soldierStrength/2);
    }
    if(painStrength>0) cout<<"Evacuate\n";
    else cout<<count<<endl;
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