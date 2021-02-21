#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    long long N,K,min;
    cin>>T;
    while(T--) {
        cin>>N>>K;
        min=INT_MAX;
        vector<long long> arr(N,0);
        for(int i=0;i<N;i++) {
            cin>>arr[i];
            if(arr[i]<min) min=arr[i];
        }
        if(K<min) cout<<"0"<<endl;
        else cout<<K-min<<endl;
    }
}