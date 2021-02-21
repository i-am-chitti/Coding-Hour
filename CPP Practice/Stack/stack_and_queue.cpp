/*
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/staque-1-e790a29f/submissions/
*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll N,K;
    cin>>N>>K;
    vector<ll> arr(N);
    for(ll i=0;i<N;i++) cin>>arr[i];
    
    ll sum=0;
    for(ll i=0;i<K;i++) sum+=arr[i];
    ll maxSum=sum;
    for(ll i=K-1,j=N-1;i>0;i--,j--) {
        sum+=arr[j]-arr[i];
        maxSum=max(sum,maxSum);
    }
    cout<<maxSum;
}