#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr) {
    int N=arr.size();
    for(int i=1;i<N;i++) {
        int temp=arr[i],j;
        for(j=i-1;j>=0 && arr[j]>temp;j--) {
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }
}

int main() {
    int N;
    cin>>N;
    vector<int> arr(N,0);
    for(int i=0;i<N;i++) {
        cin>>arr[i];
    }
    vector<int> original(arr);
    insertionSort(arr);
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            if(original[i]==arr[j]) {
                cout<<j<<" ";
            }
        }
    }
}