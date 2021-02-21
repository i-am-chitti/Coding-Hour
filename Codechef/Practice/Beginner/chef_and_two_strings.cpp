#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    string s1,s2;
    cin>>s1>>s2;
    int N=min(s1.length(),s2.length()),nDiffs=0,nQues=0;
    for(int i=0;i<N;i++) {
        if(s1[i]=='?' || s2[i]=='?') nQues++;
        else if(s1[i]!=s2[i]) nDiffs++;
    }
    cout<<nDiffs<<" "<<nDiffs+nQues<<endl;
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