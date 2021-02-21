#include<bits/stdc++.h>
using namespace std;

int main() {
    int T,N,p,q,r,n,remP,remQ,remR;
    cin>>T;
    while(T--) {
        n=0;
        cin>>N>>p>>q>>r;
        for(int i=1;i<=N;i++) {
            remP=i%p;
            remQ=i%q;
            remR=i%r;
            if(remP==0 && remQ!=0 && remR!=0) n++; 
            else if(remQ==0 && remP!=0 && remR!=0) n++; 
            else if(remR==0 && remQ!=0 && remP!=0) n++; 
        }
        cout<<n<<endl;
    }
}