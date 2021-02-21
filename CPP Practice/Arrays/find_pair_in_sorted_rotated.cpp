#include<bits/stdc++.h>
using namespace std;

int findPivot(vector<int> &arr) {
    int pivot=-1;
    for(int i=0;i<arr.size()-1;i++) {
        if(arr[i]>arr[i+1]) return i;
    }
    return pivot;
}

bool ifPairExist(vector<int> &arr,int targetSum) {
    int pivot = findPivot(arr);
    if(targetSum>arr[pivot]+arr[pivot+1]) return 0;
    if(pivot==-1) {
        //array is sorted
    }
    else {
        int i=pivot+1,j=pivot,currentSum=0;
        while(i<arr.size() && j>=0) {
            currentSum=arr[i]+arr[j];
            if(currentSum>targetSum) j--;
            else if(currentSum<targetSum) i++;
            else return 1;
        }
        if(i<arr.size()) {
            int k=arr.size()-1;
            while(i<=k) {
                currentSum=arr[i]+arr[k];
                if(currentSum>targetSum) k--;
                else if(currentSum<targetSum) i++;
                else return 1;
            }
        }
        if(j>0) {
            int k=0;
            while(k<=j) {
                currentSum=arr[k]+arr[j];
                if(currentSum>targetSum) j--;
                else if(currentSum<targetSum) k++;
                else return 1;
            }
        }
        return 0;
    }    
}

//most efficient algo
bool ifPairExist2(vector<int> &arr,int targetSum) {
    //finding pivot
    int i,j,N=arr.size();
    for(i=0;i<N-1;i++) {
        if(arr[i]>arr[i+1]) break;
    }
    j=i;
    i=(i+1)%N;
    while(i!=j) {
        if(arr[i]+arr[j]==targetSum) return 1;
        else if(arr[i]+arr[j]<targetSum) i=(i+1)%N;
        else j=(N+j-1)%N; 
    }
    return 0;
}

int main() {
    vector<int> arr;
    arr={11, 15, 26, 38, 9, 10};
    int sum=45;
    cout<<ifPairExist2(arr,sum);
}   