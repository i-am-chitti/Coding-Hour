/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

void push(string &A, string &B, char a, char b) {
    A.push_back(a);
    B.push_back(b);
}

void isPossible(string str) {
    int nZ=0,nO=0;
    int N=str.length();
    for(int i=0;i<N;i++) {
        if(str[i]=='1') nO++;
        else nZ++;
    }
    if(nO&1 || nZ&1 || str[0]=='0' || str[str.length()-1]=='0') {
        cout<<"NO\n";
        return;
    }
    string A,B;
    for(int i=0;i<N;i++) {
        if(str[i]=='0') {
            if(nZ&1) {
                A.push_back('(');
                B.push_back(')');
            }
            else {
                A.push_back(')');
                B.push_back('(');
            }
            nZ--;
        }
        else {
            if(nO) {
                A.push_back('(');
                B.push_back('(');
                nO-=2;
            }
            else {
                A.push_back(')');
                B.push_back(')');
            }
        }
    }
    cout<<"YES\n";
    cout<<A<<"\n"<<B<<"\n";


}

void solve(){
    int N;
    cin>>N;
    string str;
    cin>>str;
    isPossible(str);
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