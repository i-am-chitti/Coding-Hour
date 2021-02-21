#include<bits/stdc++.h>
using namespace std;

int findPivot(vector<int> &arr) {
    int pivot=-1;
    for(int i=0;i<arr.size()-1;i++) {
        if(arr[i]>arr[i+1]) return i;
    }
    return pivot;
}

int binarySearch(vector<int> arr, int low, int high, int key) {
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(arr[mid]==key) return mid;
    else if(arr[mid]>key) return binarySearch(arr,low,mid-1,key);
    else return binarySearch(arr,mid+1,high,key);
}

int searchArr(vector<int>& arr, int key) {
    //divide array into two
    int pivot=findPivot(arr);
    if(pivot==-1) {
        //already sorted
        //if key is less than minimum or more than maximum then not found
        if(key<arr[0] || key>arr[arr.size()-1]) return -1;
        return binarySearch(arr,0,arr.size()-1,key);
    }
    else {
        //if key is less than minimum or more than maximum then not found
        if(key>arr[pivot] || key<arr[pivot+1]) return -1;
        if(key<arr[0]) return binarySearch(arr,pivot+1,arr.size()-1,key);
        else return binarySearch(arr,0,pivot,key);
    }
}

//efficient if duplicates are not present in array O(logn)
int searchArr2(vector<int> &arr, int key) {
    if(arr.size()==0) return -1;
    int low=0,high=arr.size()-1,mid;
    while(low<=high) {
        mid=(low+high)/2;
        if(arr[mid]==key) return mid;
        if(arr[low]<=arr[mid]) {
            //low - mid is sorted
            if(key>=arr[low] && arr[mid]>=key) high=mid-1;
            else low=mid+1;
        }
        else {
            if(key>=arr[mid] && arr[high]>=key) low=mid+1;
            else high=mid-1;
        }
    }
    return -1;
}

int linearSearch(vector<int> &arr, int low, int high,int key) {
    for(int i=low;i<=high;i++) {
        if(arr[i]==key) return i;
    }
    return -1;
}

bool searchArr3(vector<int>& nums, int target) {
    int pivot=findPivot(nums);
    if(pivot==-1) {
        //already sorted
        if(linearSearch(nums,0,nums.size()-1,target)!=-1) return 1;
        else return 0;
    }
    if(target>nums[pivot] || target<nums[pivot+1]) return 0;
    if(target<nums[0]) {
        //can be found in second part
        if(linearSearch(nums,pivot+1,nums.size()-1,target)!=-1) return 1;
        else return 0;
    }
    else {
        if(linearSearch(nums,0,pivot,target)!=-1) return 1;
        else return 0;
    }
}

int main() {
    vector<int> arr;
    //arr={11,15,6,8,9,10};
    //cout<<searchArr2(arr,8);
    arr={2,5,6,0,0,1,2};
    cout<<searchArr3(arr,3);
}