#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

bool compare(pair<int,int> p1, pair<int,int> p2) {
    if(p1.first>p2.first) return 1;
    else return 0;
} 

void solve(){
    int N,t;
    cin>>N;
    priority_queue<pair<int,int>> pq;
    for(int i=0;i<N;i++) {
        cin>>t;
        pq.push(make_pair(t,N-i));
    }
    vector<int> ans(N);
    int currWait=1;
    for(int i=0;i<N;i++) {
        pair<int,int> top=pq.top();
        pq.pop();
        ans[N-top.second]=currWait;
        currWait++;
    }
    for(int i=0;i<N;i++) {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";

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