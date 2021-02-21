#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int* b) {
    int t=*a;
    *a=*b;
    *b=t;
}

int getNumberOfPass(vector<int> &arr) {
    int count=0;
    bool swapped=1;
    while(swapped) {
        swapped=0;
        count++;
        for(int i=0;i<arr.size()-1;i++) {
            if(arr[i]>arr[i+1]) {
                swap(&arr[i],&arr[i+1]);
                swapped=1;
            }
        }
    }
    return count;
}

int main() {
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    cout<<getNumberOfPass(arr);
}