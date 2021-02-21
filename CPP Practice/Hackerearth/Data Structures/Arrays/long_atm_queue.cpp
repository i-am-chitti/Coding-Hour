#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    vector<int> H(N,0);
    for(int i=0;i<N;i++) cin>>H[i];
    int nGroups=1;
    for(int i=0;i<N-1;i++) {
        if(H[i]>H[i+1]) nGroups++;
    }
    cout<<nGroups;
}