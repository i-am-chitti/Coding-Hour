#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;


void solve(){
    int t,N;
    cin>>N;
    map<int, pair<int,int>> mp;
    vector<int> weights(N),dist(N);
    for(int i=0;i<N;i++) cin>>weights[i];
    for(int i=0;i<N;i++) cin>>dist[i];
    for(int i=0;i<N;i++) {
        mp.insert({weights[i],{dist[i],i}});
    }
    auto it=mp.begin();
    int lastPos=it->second.second,jump=0;
    it++;
    for(;it!=mp.end();it++) {
        if(it->second.second<=lastPos) {
        int jumpDist=it->second.first+it->second.second;
        jump++;
        if(jumpDist>lastPos) {
            lastPos=jumpDist;
        }
        else {
            while(jumpDist<=lastPos) {
                jumpDist+=it->second.first;
                jump++;
            }
            lastPos=jumpDist;
        }
        }
        else lastPos=it->second.second;
    }
    cout<<jump<<endl;

    
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