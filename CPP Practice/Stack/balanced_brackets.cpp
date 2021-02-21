#include<bits/stdc++.h>
using namespace std;

bool ifBalanced(string str) {
    stack<char> stck;
    for(int i=0;i<str.length();i++) {
        switch(str[i]) {
            case '(': stck.push(str[i]);
                break;
            case ')': 
                if(!stck.empty() && stck.top()=='(') stck.pop();
                else return 0;
                break;
            case '{': stck.push(str[i]);
                break;
            case '}': 
                if(!stck.empty() && stck.top()=='{') stck.pop();
                else return 0;
                break;
            case '[': stck.push(str[i]);
                break;
            case ']': 
                if(!stck.empty() && stck.top()=='[') stck.pop();
                else return 0;
                break;
        }
    }
    return stck.empty();
}

int main() {
    int N;
    cin>>N;
    while(N--) {
        string str;
        cin>>str;
        cout<<ifBalanced(str);
    }
}