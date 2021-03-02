/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

bool isCorrect(string str) {
    if(str[0]==')') return 0;
    stack<char> st;
    st.push(str[0]);
    for(int i=1;i<str.length();i++) {
        if(str[i]=='(') st.push(str[i]);
        else {
            if(st.empty()) return 0;
            else st.pop();
        }
    }
    if(st.empty()) return 1;
    else return 0;
}

bool fun(string str, string temp, int i, vector<char> &arr) {
    if(i==str.length()) {
        //cout<<temp<<"\n";
        return isCorrect(temp);
    }
    bool isValid=0;
    if(str[i]=='A') {
        temp.push_back(arr[0]);
        isValid = fun(str,temp,i+1,arr);
    }
    if(!isValid && str[i]=='B') {
        temp.push_back(arr[1]);
        isValid = fun(str,temp,i+1,arr);
    }
    if(!isValid && str[i]=='C') {
        temp.push_back(arr[2]);
        isValid = fun(str,temp,i+1,arr);
    }
    return isValid;
    
}

void solve(){
    string str;
    cin>>str;
    vector<char> arr;
    arr = {'(','(',')'};
    string temp;
    bool isValid=0;
    int N=str.length();
    if(str[0]==str[N-1]) isValid=0;
    if(!isValid)
        isValid = fun(str,temp,0,arr);
    arr = {'(',')','('};
    if(!isValid)
        isValid = fun(str,temp,0,arr);
    arr = {'(',')',')'};
    if(!isValid)
        isValid = fun(str,temp,0,arr);
    arr = {')','(','('};
    if(!isValid)
        isValid = fun(str,temp,0,arr);
    arr = {')','(',')'};
    if(!isValid)
        isValid = fun(str,temp,0,arr);
    arr = {')',')','('};
    if(!isValid)
        isValid = fun(str,temp,0,arr);
    if(isValid) cout<<"Yes\n";
    else cout<<"No\n";
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