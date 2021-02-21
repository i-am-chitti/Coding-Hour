#include<bits/stdc++.h>
using namespace std;

int main() {
    int T,X,count;
    cin>>T;
    while(T--) {
        cin>>X;
        int ans;
        int i=1;
        while(i<=sqrt(X)) {
            i=i*2;
            if(X/i>=i/2) ans=X-X/i;
            else ans=(X-(i/2))+1;  
        }
        cout<<ans<<endl;
    }
}