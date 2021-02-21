#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    ll N,temp,t;
    cin>>N;
    unordered_map<int, vector<int>> mp;
    vector<int> input(N-1);
    for(int i=0;i<N-1;i++) cin>>input[i];
    for(int i=1;i<N;i++) {
        mp[input[i-1]].push_back(i+1);
    }
    
    ll V,W,Q;
    cin>>Q;
    while(Q--) {
        cin>>V>>W;
        queue<pair<int,int>> auxQueue;
        auxQueue.push({V,W});
        ll remaining=0;
        while(!auxQueue.empty()) {
            ll node = auxQueue.front().first, work=auxQueue.front().second;
            auxQueue.pop();
            ll nChildren = mp[node].size();
            if(nChildren!=0 && work%nChildren==0) {
                work/=nChildren;
                for(int i=0;i<nChildren;i++) {
                    auxQueue.push({mp[node][i],work});
                }
            }
            else if(nChildren!=0 && work%nChildren!=0) remaining+=work;
        }

        cout<<remaining<<endl;
    }
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}