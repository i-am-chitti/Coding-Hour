//Search an element in a sorted and rotated array
#include<bits/stdc++.h>
using namespace std;

int searchKey(vector<int> arr, int l, int h, int key) {
    if(l>h) {
        return -1;
    }

    int mid = (l+h)/2;
    if(arr[mid] == key) {
        return mid;
    }

    if(arr[l]<=arr[mid]) {
        if(arr[l]<=key && key<=arr[mid]) {
            return searchKey(arr, l, mid-1, key);
        }
        else return searchKey(arr, mid+1, h, key);
    }

    if(key>=arr[mid+1] && key<=arr[h]) {
        return searchKey(arr, mid+1, h, key);
    }
    return searchKey(arr, l, mid-1, key);
}

int main() {
    //vector<int> arr = {4,5,6,7,8,9,1,2,3};
    vector<int> arr = {6,7,1,2,3,4,5};
    int key = 7;
    int i = searchKey(arr, 0, arr.size()-1, key);
    cout<<i;
}