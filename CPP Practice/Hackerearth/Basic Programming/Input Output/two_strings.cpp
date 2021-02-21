#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    int T;
    cin>>T;
    while(T--) {
        cin>>s1>>s2;
        vector<int> alphabet(26,0);
        vector<int> alphabet2(26,0);
        for(int i=0;i<s1.size();i++) {
            alphabet[s1[i]-'a']++;
        }
        for(int i=0;i<s2.size();i++) {
            alphabet2[s2[i]-'a']++;
        }

        bool isIdentical=true;
        for(int i=0;i<26;i++) {
            if(alphabet[i]!=alphabet2[i]) {
                isIdentical=false;
                break;
            } 
        }
        if(isIdentical) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}