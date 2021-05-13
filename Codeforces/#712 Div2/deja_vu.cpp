/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

bool isPalindrome(string str) {
    int i=0,j=str.length()-1;
    while(i<j) {
        if(str[i]!=str[j]) return 0;
        i++;
        j--;
    }
    return 1;
} 

void solve(){
    string str;
    cin>>str;
    int N=str.length();
    bool allA=1;
    for(int i=0;i<N;i++) {
        if(str[i]!='a') {
            allA=0;
            break;
        }
    }
    if(allA) cout<<"NO\n";
    else {
        cout<<"YES\n";
        if(!isPalindrome("a"+str)) cout<<"a"+str<<"\n";
        else cout<<str+"a"<<"\n";
    }
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