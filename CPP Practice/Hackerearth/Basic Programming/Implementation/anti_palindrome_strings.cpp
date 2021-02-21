#include<bits/stdc++.h>
using namespace std;

string getAntiPalindrome(string str) {
    string temp=str;
    reverse(temp.begin(),temp.end());
    if(temp==str) return "-1";

    sort(str.begin(),str.end());
    return str;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    string str;
    while(T--) {
        cin>>str;
        cout<<getAntiPalindrome(str)<<endl;
    }
}