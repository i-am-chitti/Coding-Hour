#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr) {
    int temp;
    for(int i=0;i<arr.size()-1;i++) {
        for(int j=0;j<arr.size()-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int getMaxMinSumDiff(vector<int> &arr, int N, int M) {
    vector<int> res(2,0);
    for(int i=0;i<N-M;i++) {
        res[0]+=arr[i];
    }
    for(int i=N-1,K=N-M;K>0;K--,i--) {
        res[1]+=arr[i];
    }
    cout<<res[1]<<" "<<res[0]<<endl;
    return res[1]-res[0];
}

int main() {
    int T,N,M;
    cin>>T;
    while(T--) {
        cin>>N>>M;
        vector<int> arr(N);
        for(int i=0;i<N;i++) cin>>arr[i];
        bubbleSort(arr);
        cout<<getMaxMinSumDiff(arr,N,M)<<endl;
    }
}