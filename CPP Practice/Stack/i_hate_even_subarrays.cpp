/*

You are given a binary string, (string which contains 0's and 1's), You have to perform several operations on this string, in one operation choose a non-empty even length substring containing only 0's or only 1's and remove it from the string.

Your goal is to minimize the final length of the string after performing several operations.It is possible that the final string may become empty, in that case print "KHALI" without quotes.

And it can be proved that there is always an unique string with minimal length after performing the operations.

Input:

First line of input contains an intger T denoting number of testcases.
Next T lines of input contains a binary string S.
Output:

for each testcase print the required minimal string.

*/

#include<bits/stdc++.h>
using namespace std;

string solve(string str) {
    stack<char> stc;
    for(int i=0;i<str.length();i++) {
        if(!stc.empty()) {
            if(stc.top()==str[i]) {
                while(!stc.empty() && stc.top()==str[i]) stc.pop();
            }
            else stc.push(str[i]);
        }
        else stc.push(str[i]);
    }
    if(stc.empty()) return "KHALI";
    string res;
    while(!stc.empty()) {
        res.push_back(stc.top());
        stc.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        string s;
        cin>>s;
        cout<<solve(s)<<endl;
    }
}