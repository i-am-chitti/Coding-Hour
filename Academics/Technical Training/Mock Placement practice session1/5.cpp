#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

bool checkIfValid(string str) {
    for(int i=1;i<str.length();i++) {
        if(str[i]<=str[i-1]) return 0;
    }
    return 1;
}

ll findCombination(int n, int r) {
    if(n==r || r==0) return 1;
    return findCombination(n-1,r)+findCombination(n-1,r-1); 
}

void solve(){
    string str;
    cin>>str;
    if(checkIfValid(str)) {
        int res=0,N=str.length();
        for(int i=1;i<N;i++) res+=findCombination(26,i);

        for(int i=0;i<N;i++) {
            char temp;
            if(i==0) temp='a';
            else temp = str[i-1]+1;
            for(int j=temp;j<str[i];j++) {
                res+=findCombination('z'-j,N-i-1);
            }
        }
        cout<<res+1<<"\n";
    }
    else cout<<"0\n";

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