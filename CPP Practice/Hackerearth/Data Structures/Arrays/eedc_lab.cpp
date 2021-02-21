//getting TLE 
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool getNumbers(vector<int> &arr,int l, int r) {
    int left=0,right=0;
    if(l>=0) {
        for(int i=0;i<=l;i++) left=left*10+arr[i];
    }
    if(r<arr.size()) {
        for(int i=r;i<arr.size();i++) right=right*10+arr[i];
    }
    ll sum=left+right;
    return (sum%2==0 && sum%3==0 && sum%5==0);
}

int main() {
	int N,Q,L,R,c=0;
    cin>>N;
    vector<int> arr(N,0);
    vector<int> luckyIndicies(N,0);
    for(int i=0;i<N;i++) cin>>arr[i];
    for(int i=0;i<N;i++) {
        if(getNumbers(arr, i-1,i+1)) luckyIndicies[i]++;
    }
    cin>>Q;
    while(Q--) {
        cin>>L>>R;
        c=0;
        for(int i=L-1;i<R;i++) {
            if(luckyIndicies[i]>0) c++;
        }
        cout<<c<<endl;
    }
}