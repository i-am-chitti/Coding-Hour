#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    string s;
    cin>>s;
    int N=s.length();
    vector<int> left(26,0),right(26,0);
    for(int i=0;i<N/2;i++) {
        left[s[i]-'a']++;
        //cout<<left[s[i]-'a']<<" "<<s[i]<<" ";
    }
    for(int i=N&1?(N/2)+1:N/2;i<N;i++) {
        right[s[i]-'a']++;
    }
    bool flag=1;
    for(int i=0;i<26;i++) {
        if(left[i]!=right[i]) {
            flag=0;
            break;
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
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