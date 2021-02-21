#include<bits/stdc++.h>
using namespace std;

int main() {
    long long N,t;
    long long min=INT_MAX, max=INT_MIN;
    cin>>N;
    vector<long long> arr;
    for(long long i=0;i<N;i++) {
        cin>>t;
        arr.push_back(t);
    }
    sort(arr.begin(),arr.end());
    long long sum=0;
    for(long long i=0;i<N;i++) {
        sum+=arr[i];
    }
    cout<<sum-arr[N-1]<<" "<<sum-arr[0];
}