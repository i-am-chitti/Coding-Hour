#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int j;
    bool isBad=0;
    for(int i=0;i<s.size();i++) {
        j=i;
        while(j<s.size() && j<i+6 && s[j]=='0') {j++;}
        if(j==i+6) {
            isBad=1;
            break;
        }
        j=i;
        while(j<s.size() && j<i+6 && s[j]=='1') {j++;}
        if(j==i+6) {
            isBad=1;
            break;
        }
    }
    if(isBad) cout<<"Sorry, sorry!";
    else cout<<"Good luck!";
}