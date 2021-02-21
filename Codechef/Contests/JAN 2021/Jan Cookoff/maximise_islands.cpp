#include<bits/stdc++.h>
using namespace std;

int solve(vector<string> arr, int N, int M) {
    int count=0;
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            if(i%2 && j%2) {
                if(arr[i][j] != '*') count++;
            }
            else if(i%2==0 && j%2==0) {
                if(arr[i][j] != '*') count++;
            }
            else {
                if(arr[i][j] != '.') count++;
            }
        }
    }
    if((N*M)%2) return count;
    int anotherCount=0;
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            if(i%2==1 && j%2==0) {
                if(arr[i][j] != '*') anotherCount++;
            }
            else if(i%2==0 && j%2==1) {
                if(arr[i][j] != '*') anotherCount++;
            }
            else {
                if(arr[i][j] != '.') anotherCount++;
            }
        }
    }
    return min(anotherCount,count);
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        int N,M;
        cin>>N>>M;
        vector<string> arr(N);
        for(int i=0;i<N;i++) cin>>arr[i];
        cout<<solve(arr,N,M);
    }
}