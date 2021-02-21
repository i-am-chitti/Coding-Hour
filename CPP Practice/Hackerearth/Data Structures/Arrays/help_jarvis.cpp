#include<bits/stdc++.h>
using namespace std;

string canTrainMove(string seq) {
    sort(seq.begin(),seq.end());
    cout<<seq<<endl;
    for(int i=0;i<seq.size()-1;i++) {
        if(seq[i+1]-'0'!=seq[i]-'0'+1) return "NO"; 
    }
    return "YES";
    
}

int main() {
    int t;
    cin>>t;
    string seq;
    while(t--) {
        cin>>seq;
        cout<<canTrainMove(seq);
    }
}