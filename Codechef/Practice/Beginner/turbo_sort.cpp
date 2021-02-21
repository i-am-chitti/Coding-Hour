#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int l, int mid, int h) {
    int aux[h-l+1];
    int j=mid+1,k=0;
    while(l<=mid && j<=h) {
        if(arr[l]<=arr[j]) {
            aux[k]=arr[l];
            l++;
        }
        else {
            aux[k]=arr[j];
            j++;
        }
        k++; 
    }
    while(l<=mid) {
        aux[k]=arr[l];
        k++;
        l++;
    }
    while(j<=h) {
        aux[k]=arr[j];
        k++;
        j++;
    }
    k=0;
    for(int i=l;i<=h;i++) {
        arr[i]=aux[k++];
        cout<<aux[k-1]<<" ";
    }
    cout<<endl;
    return;
}

void mergeSort(int *arr, int l, int h) {
    if(l<h) {
        int mid=(l+h)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
    return;
}

int main() {
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++) {
        cin>>arr[i];
    }
    mergeSort(arr,0,t-1);
    cout<<endl;
    for(int i=0;i<t;i++) cout<<arr[i]<<" ";
}