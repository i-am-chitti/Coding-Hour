#include<bits/stdc++.h>
using namespace std;

int getMax(vector<int> &arr, int l, int r) {
    int max=INT_MIN;
    for(int i=l;i<=r;i++) {
        if(arr[i]>max) max=arr[i];
    }
    return max;
}

int main() {
    int N,K;
    cin>>N>>K;
    vector<int> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    int max=getMax(arr, 0, K-1);
    cout<<max<<" ";
    for(int i=1;i<N-K+1;i++) {
        if(arr[i+K-1]>max) max=arr[i+K-1];
        else if(arr[i-1]==max) max=getMax(arr,i,i+K-1);
        cout<<max<<" ";
    }
}