#include<bits/stdc++.h>
using namespace std;

int main() {
    int T,a,b;
    cin>>T;
    while(T--) {
        cin>>a>>b;
        if(a>b) cout<<a/((b/2)*2)<<endl;
        else cout<<b/((a/2)*2)<<endl;
    }
}