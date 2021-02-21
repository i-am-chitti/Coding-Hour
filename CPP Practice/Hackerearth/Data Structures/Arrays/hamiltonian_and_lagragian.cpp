#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    vector<int> arr(N,0);
    for(int i=0;i<N;i++) cin>>arr[i];
    int max=INT_MIN;
    vector<int> res;
    for(int i=N-1;i>=0;i--) {
        if(arr[i]>=max) {
            max=arr[i];
            res.push_back(arr[i]);
        }
    }
    reverse(res.begin(), res.end());
    for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
}