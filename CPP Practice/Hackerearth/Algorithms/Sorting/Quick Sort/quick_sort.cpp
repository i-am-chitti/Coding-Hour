#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int t=*a;
    *a=*b;
    *b=t;
}

void printArray(vector<int> arr) {
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int partition(vector<int> &arr, int l, int h) {
    int i=l+1,j=h;
    while(i<j) {
        while(arr[i]<=arr[l]) i++;
        while(arr[j]>arr[l]) j--;
        if(i<j) swap(&arr[i], &arr[j]); 
    }
    swap(&arr[j],&arr[l]);
    return j;
}

void quickSort(vector<int> &arr, int l, int h) {
    printArray(arr);
    if(l<h) {
        int pivotIndex = partition(arr,l,h);
        quickSort(arr,l,pivotIndex);
        quickSort(arr,pivotIndex+1,h);
    }
}

int main() {
    int N;
    cin>>N;
    vector<int> arr(N,0);
    for(int i=0;i<N;i++) cin>>arr[i];
    quickSort(arr, 0, N-1);
}