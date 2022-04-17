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
    vector<pair<string, unordered_map<char, ll>>> arr;
    string temp;

    for(ll i=0;i<N;i++) {

        // input
        cin>>temp;

        // noting alphabets
        unordered_map<char,ll> mp; 
        for(ll j=0;j<(ll)temp.length();j++) {
            
            if(mp.find(temp[j])==mp.end()) mp[temp[j]]++;

        }

        arr.push_back(make_pair(temp,mp));

    }

    vector<vector<string>> groups;

    ll res1=0, res2=0;

    for(auto i=arr.begin();i!=arr.end();i++) {

        vector<string> group;

        string A = i->first;

        group.push_back(A);

        for(auto j=arr.begin();j!=arr.end();j++) {

            string B = j->first;

            if(A!=B) {
                
                // check if difference of atmost 1
                ll count=0;
                for(auto it:i->second) {
                    if(j->second.find(it.first)!=j->second.end()) {
                        // unique and common
                        count++;
                    }
                }

                if(abs(count-max(i->second.size(), j->second.size())) == 1) {
                    group.push_back(B);
                    arr.erase(j);
                    j--;
                } 

            }

        }

        res1=max(res1,(ll)group.size());

        groups.push_back(group);

        arr.erase(i);
        i--;

    }

    // for(ll i=0;i<groups.size();i++) {
    //     for(ll j=0;j<groups[i].size();j++) {
    //         cout<<groups[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    res2=max(res2,(ll)groups.size());

    cout<<res1<<" "<<res2<<"\n";

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