#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin>>N;
    string inputStr;
    cin>>inputStr;
    bool isSol=true;
    for(int i=0;i<inputStr.size();i++) 
        if(inputStr[i]=='.') inputStr[i]='B';
    for(int i=0;i<inputStr.size()-1;i++) {
        if(inputStr[i]=='H' && inputStr[i+1]=='H') {
            isSol=false;   
        }
    }
    if(isSol) {
        cout<<"YES"<<endl<<inputStr;
    }
    else cout<<"NO";
}