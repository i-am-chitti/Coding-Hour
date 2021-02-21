#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N,X,Y,temp;
    cin>>N>>X>>Y;
    set<int> V,W;
    vector<pair<int,int>> contests(N);
    for(int i=0;i<N;i++) cin>>contests[i].first>>contests[i].second;
    for(int i=0;i<X;i++) {
        cin>>temp;
        V.insert(temp);
    }
    for(int i=0;i<Y;i++) {
        cin>>temp;
        W.insert(temp);
    }
    int minTime=INT_MAX;
    for(int i=0;i<N;i++) {
        auto it=V.lower_bound(contests[i].first);
        if(it!=V.end()) {
            if(*it>contests[i].first) {
                if(it!=V.begin()) it--;
                else continue;
            }
            if(*it<=contests[i].first) {
                auto jt=W.lower_bound(contests[i].second);
                if(jt!=W.end() && *jt>=contests[i].second)
                    minTime=min(*jt-*it+1,minTime);
            }
        }
    }
    cout<<minTime;
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}