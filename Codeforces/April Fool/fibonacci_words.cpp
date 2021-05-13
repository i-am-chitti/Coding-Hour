/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    string str;
    cin>>str;
    bool isTrue=1;
    for(int i=1;i<str.length()-1;i++) {
        //cout<<str[i-1]<<" "<<str[i]<<" "<<str[i+1]<<"\n";
        //cout<<str[i-1]-'A'<<" "<<str[i]-'A'<<" "<<str[i+1]-'A'<<"\n";
        int a=str[i-1]-'A';
        int b=str[i]-'A';
        int c=str[i+1]-'A';
        int sum=a+b;
        if(sum>=26) {
            sum-=26;
        }
        if(sum!=c) {
            isTrue=0;
            break;
        }
    }
    if(isTrue) cout<<"YES";
    else cout<<"NO";
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}