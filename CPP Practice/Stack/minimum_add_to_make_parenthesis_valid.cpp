#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    stack<char> stck;
    for(int i=0;i<str.size();i++) {
        if(stck.empty()) stck.push(str[i]);
        else {
            switch(str[i]) {
                case '(': stck.push(str[i]);
                break;
                case ')':
                    if(stck.top()=='(') stck.pop();
                    else {
                        stck.push(str[i]);
                    }
                break;
            }
        }
    }
    cout<<stck.size();
}