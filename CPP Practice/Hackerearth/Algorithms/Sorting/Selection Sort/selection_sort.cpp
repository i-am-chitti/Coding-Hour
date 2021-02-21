#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr, int x) {
    int N=arr.size();
    for(int i=0;i<N-1;i++) {
        int minIndex=i;
        for(int j=i+1;j<N;j++) {
            if(arr[j]<arr[minIndex]) minIndex=j;
        }
        if(arr[minIndex]!=arr[i]) {
            int temp=arr[minIndex];
            arr[minIndex]=arr[i];
            arr[i]=temp;
        }
        if(i+1==x) return;
    }
}

int main() {
    int N,x;
    cin>>N>>x;
    vector<int> arr(N,0);
    for(int i=0;i<N;i++) cin>>arr[i];
    selectionSort(arr,x);
    for(int i=0;i<N;i++) cout<<arr[i]<<" ";
}