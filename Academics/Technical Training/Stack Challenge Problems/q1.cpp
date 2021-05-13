// Given a stack of characters, Item, convert (A+B) to the postfix form AB+. The file “Item.h” will be provided. 

/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

int getPriority(char c) {
    switch(c) {
        case '^': return 3;
        break;
        case '*': return 2;
        break;
        case '/': return 2;
        break;
        case '+': return 1;
        break;
        case '-': return 1;
        break;
    }
    return 0;
}

void solve(){
    string str;
    cin>>str;
    string res;
    stack<char> st;
    for(int i=0;i<str.length();i++) {
        if(isalpha(str[i])) res.push_back(str[i]);
        else {
            if(str[i]=='(') st.push(str[i]);
            else if(str[i]==')') {
                while(!st.empty() && st.top()!='(') {
                    res.push_back(st.top());
                    st.pop();
                }
                st.pop();
            }
            else {
                while(!st.empty() && getPriority(st.top())>=getPriority(str[i])) {
                    res.push_back(st.top());
                    st.pop();
                }
                st.push(str[i]);
            }
        }
    }
    while(!st.empty()) {
        res.push_back(st.top());
        st.pop();
    }
    cout<<res<<"\n";
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