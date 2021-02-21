#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int l,u,N;
    cin>>N;
    vector<pair<int,int>> arr;
    for(int i=0;i<N;i++) {
        cin>>l>>u;
        arr.push_back(make_pair(l,u));
    }
    for(int i=0;i<N;i++) {
        int score=0;
        for(int j=0;j<N;j++) {
            if(i==j) continue;
            else {
                int il=arr[i].first,iu=arr[i].second;
                int jl=arr[j].first,ju=arr[j].second;
                if(jl-il>=0 && iu-ju>=0 && abs(abs(il-iu)-abs(jl-ju))>0) {
                    score+=2;
                }
            }
        }
        cout<<score<<" ";
    }
}
 

int main()
{
    fast_cin();
    solve();
    return 0;
}