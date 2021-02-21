#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    stack<char> stck;
    for(int i=0;i<str.size();i++) {
        if(!stck.empty() && stck.top()==str[i]) stck.pop();
        else stck.push(str[i]);
    }
    str="";
    while(!stck.empty()) {
        str.push_back(stck.top());
        stck.pop();
    }
    reverse(str.begin(),str.end());
    cout<<str;
}