#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    string s,t;
    cin>>s>>t;
    int nMoves=0;
    for(int i=0;i<N;i++) {
        int diff=t[i]-s[i];
        if(diff==0) continue;
        else if(diff<0) diff+=26;
        while(diff>=13) {
            nMoves++;
            diff-=13;
        }
        nMoves+=diff;
    }
    cout<<nMoves;
}