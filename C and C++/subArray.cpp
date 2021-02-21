//subarray and substring are same that are arrays of contagious elements
#include<bits/stdc++.h>
using namespace std;

void printSubArray(vector<int> &arr, int i, int j) {
    for(int k=i;k<=j;k++) {
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}

void printAllSubarray(vector<int> &arr) {
    for(int i=0;i<arr.size();i++) {
        for(int j=i;j<arr.size();j++) {
            printSubArray(arr, i, j);
        }
    }
}

int main() {
    vector<int> arr = {1,2,3};
    printAllSubarray(arr);
}