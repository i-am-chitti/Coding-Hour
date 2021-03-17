/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    ll N;
    cin>>N;
    vector<ll> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    vector<pair<int,int>> aux;
    aux.push_back({arr[0],1});
    aux.push_back({arr[1],2});
    int ans=1,k=2;
    for(int i=2;i<N;i++) {
        while(aux.size()>=2) {
            double m1 = ((double)(aux[k-1].first-aux[k-2].first))/((double)(aux[k-1].second-aux[k-2].second));
            double m2 = ((double)(arr[i]-aux[k-1].first))/((double)(i+1-aux[k-1].second));
            //cout<<aux[k-1].first<<" "<<aux[k-1].second<<" "<<m1<<" "<<m2<<"\n";
            if(m1<=m2) {
                aux.pop_back();
                k--;
            }
            else break;
        }

        aux.push_back(make_pair(arr[i],i+1));
        k++;
        //cout<<aux[k-1].second<<" "<<aux[k-2].second<<"\n";
        ans = max(ans,aux[k-1].second-aux[k-2].second);
    }
    cout<<ans<<"\n";
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