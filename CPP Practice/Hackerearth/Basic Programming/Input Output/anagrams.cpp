#include<bits/stdc++.h>
using namespace std;

int calculateDeletions(string a, string b) {
    vector<int> freq1(27,0);
    vector<int> freq2(27,0);
    for(int i=0;i<a.size();i++) {
        freq1[a[i]-'0']++;
    }
    for(int i=0;i<b.size();i++) {
        freq2[b[i]-'0']++;
    }
    int c=0;
    for(int i=1;i<27;i++) {
        c+=abs(freq1[i]-freq2[i]);
    }
    return c;
}

int main() {
    int T;
    cin>>T;
    string a, b;
    while(T--) {
        cin>>a>>b;
        cout<<calculateDeletions(a,b)<<endl;
    }
}