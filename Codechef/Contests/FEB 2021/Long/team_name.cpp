#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;


ll countDistinct(set<char> A, set<char> B) {
    //ll N1=A.size(),N2=B.size();
    for(auto it=B.begin();it!=B.end();it++) {
        A.insert(*it);
    }
    return A.size();
}

void solve(){
    int N;
    cin>>N;
    map<string, set<char>> mp;
    string s;
    char c;
    for(int i=0;i<N;i++) {
        cin>>s;
        c=s[0];
        s.erase(s.begin());
        mp[s].insert(c);
    }
    ll count=0,temp;
    auto last=mp.end();
    last--;
    for(auto it=mp.begin();it!=last;it++) {
        auto jt=it;
        jt++;
        for(;jt!=mp.end();jt++) {
            temp=countDistinct(it->second,jt->second);
            count+=(temp-it->second.size())*(temp-jt->second.size());
        }
    }
    cout<<2*count<<endl;
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