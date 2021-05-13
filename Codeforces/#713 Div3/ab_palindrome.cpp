/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;


void solve(){
    int a, b;
    string str;
    cin>>a>>b;
    cin>>str;
    if(str.length()==1 && str[0]=='?') {
        cout<<"0"<<"\n";
        return;
    }
    else if(str.length()==1 && str[0]!='?') {
        cout<<str<<"\n";
        return;
    }
    int i=0,j=a+b-1;
    int N=a+b;
    while(i<j) {
        if(str[i]=='?' && str[j]!='?') {
            str[i]=str[j];
        }
        else if(str[i]!='?' && str[j]=='?') {
            str[j]=str[i];
        }
        i++;
        j--;
    }
    for(i=0;i<N;i++) {
        if(str[i]=='0') a--;
        else if(str[i]=='1') b--;
    }
    if(a&1 || b&1) {
        cout<<"-1";
    }
    else {
        i=0;
        j=N-1;
        while(i<j) {
            if(str[i]=='?') {
                if(a>0) {
                    str[i]='0';
                    str[j]='0';
                    a-=2;
                }
                else {
                    str[i]='1';
                    str[j]='1';
                    b-=2;
                }
            }
            i++;
            j--; 
        }
        cout<<str;
    }
    cout<<"\n";
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