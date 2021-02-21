//very wrong approach
#include<bits/stdc++.h>
using namespace std;

long long summation(vector<long long> &arr, int l, int h) {
    long long sum=0;
    if(l<h) {
        //straight summation
        for(long long i=l;i<=h;i++) sum+=arr[i];
    }
    else {
        for(long long i=0;i<=h;i++) sum+=arr[i];
        for(long long i=l;i<arr.size();i++) sum+=arr[i];
    }
    return sum;
}

int main() {
    long long N,t;
    long long min=INT_MAX, max=INT_MIN;
    cin>>N;
    vector<long long> arr;
    for(long long i=0;i<N;i++) {
        cin>>t;
        arr.push_back(t);
    }
    N--;
    for(long long l=0;l<=N;l++) {
        long long h = (l+N-1)<N?l+N-1:l-2;
        long long sum = summation(arr, l, h);
        if(sum>max) max=sum;
        if(sum<min) min=sum;
    }
    cout<<min<<" "<<max;
}