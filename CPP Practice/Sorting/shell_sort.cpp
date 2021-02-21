#include<bits/stdc++.h>
using namespace std;

void shellSort(int *arr, int N) {
    for(int gap=N/2;gap>0;gap/=2) {
        for(int i=gap;i<N;i++) {
            int temp=arr[i];
            int j=i-gap;
            while(j>=0 && arr[j]>temp) {
                arr[j+gap]=arr[j];
                j-=gap;
            }
            arr[j+gap]=temp;
        }
    }
}

int main() {
    int arr[]={16,12,10,9,8,7,6,5};
    int N=8;
    // for(int gap=N/2;gap>0;gap/=2) {
    //     for(int i=0;i+gap<N;i++) {
    //         if(arr[i]>arr[i+gap]) {
    //             swap(arr[i],arr[i+gap]);
    //             int j=i;
    //             while(j-gap>=0 && arr[j-gap]>arr[j]) {
    //                 swap(arr[j-gap],arr[j]);
    //                 j-=gap;
    //             }
    //         }
    //     }
    // }
    shellSort(arr,N);
    for(int i=0;i<N;i++) {
        cout<<arr[i]<<" ";
    }
}