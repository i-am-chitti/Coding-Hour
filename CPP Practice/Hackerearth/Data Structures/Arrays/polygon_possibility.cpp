#include<bits/stdc++.h>
using namespace std;

int main() {
    int T,N,n,sum,max;
    cin>>T;
    while(T--) {
        cin>>N;
        sum=0;
        max=INT_MIN;
        for(int i=0;i<N;i++) {
            cin>>n;
            sum+=n;
            if(n>max) max=n;
        }
        if(max < (sum-max)) cout<<"Yes\n";
        else cout<<"No\n";
    }
}