#include<bits/stdc++.h>
using namespace std;

int main() {
    long long N,t,maxN=INT_MIN;
    cin>>N;
    vector<long long> arr;
    for(long long i=0;i<N;i++) {
        cin>>t;
        arr.push_back(t);
        maxN=max(maxN,t);
    }
    
    if(maxN<0) cout<<maxN<<" 1"; //max Sum in negative array
    else {
        long long maxSum=0, c=0;
        for(long long i=0;i<N;i++) {
            if(arr[i]>=0) {
                maxSum+=arr[i];
                c++;
            }
        }
        cout<<maxSum<<" "<<c;
    }
}