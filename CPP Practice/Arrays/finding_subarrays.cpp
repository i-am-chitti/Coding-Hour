#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<int>> findSubarrays(vector<int> arr) {
    vector<vector<int>> res;
    int n=arr.size();
    vector<ll> forwardSum(n+1,0);
    for(int i=1;i<n+1;i++) forwardSum[i]=forwardSum[i-1]+arr[i-1];
    for(int i=0;i<n+1;i++) cout<<forwardSum[i]<<" ";
    cout<<endl;
    for(int l=0;l<n;l++) {
        for(int r=l;r<n;r++) {
            //cout<<"l = "<<l<<" "<<r<<endl;
            int num=r-l+1;
            double subArraySum = forwardSum[r+1]-forwardSum[l];
            double subArrayAvg=(subArraySum/num);
            double remainingSum=forwardSum[n]-subArraySum;
            double remainingAvg = remainingSum>0 ? (remainingSum/(n-num)): 0;
            if(subArrayAvg>remainingAvg) {
                vector<int> temp = {l+1,r+1};
                res.push_back(temp);
            }
        }
    }
    return res;
}

int main() {
    int N;
    cin>>N;
    vector<int> arr(N,0);
    for(int i=0;i<N;i++) cin>>arr[i];
    vector<vector<int>> res = findSubarrays(arr);
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++) {
        cout<<res[i][0]<<" "<<res[i][1]<<endl;
    }
}