#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t,N,Q,L,R,sum;
    cin>>N>>Q;
    vector<long long> arr;
    for(int i=0;i<N;i++) {
        cin>>t;
        arr.push_back(t);
    }
    while(Q--) {
        sum=0;
        cin>>L>>R;
        for(int i=L-1;i<R;i++) sum+=arr[i];
        cout<<sum/(R-L+1)<<endl;
    }
}