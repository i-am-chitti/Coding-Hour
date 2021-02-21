#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N;
    cin>>N;
    string s;
    cin>>s;
    int scoreA=0,scoreB=0,remA=N,remB=N,n=0;
    for(int i=0;i<2*N;i++) {
        if(i%2) {
            scoreB+=s[i]-'0';
            remB--;
        }
        else {
            scoreA+=s[i]-'0';
            remA--;
        }
        if(scoreA>(scoreB+remB)) {
            n=i+1;
            break;
        }
        else if(scoreB>(scoreA+remA)) {
            n=i+1;
            break;
        }
        else if(scoreA==scoreB && i==2*N-1) {
            n=i+1;
            break;
        }
    }
    cout<<n<<endl;
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