//Given an array A[] and a number x, check for pair in A[] with sum as x

#include<bits/stdc++.h>
using namespace std;

//Method 1
void isPairPresent(vector<int> arr, int &givenSum) {
    unordered_set<int> table;
    bool isPresent = false;
    for(int i=0;i<arr.size();i++) {
        int a = givenSum-arr[i];
        if(table.find(a) == table.end()) {
            table.insert(arr[i]);
        }
        else {
            isPresent = true;
            cout<<"("<<arr[i]<<", "<<a<<")"<<endl;
        }
    }
}

//Method2
void isPairPresent2(vector<int> arr, int &givenSum) {
    sort(arr.begin(), arr.end());
    int l=0,h=arr.size()-1;
    bool isPresent = false;

    while(l<h) {
        int currentSum = arr[l]+arr[h];
        if(currentSum == givenSum) {
            isPresent = true; 
            cout<<"("<<arr[l]<<", "<<arr[h]<<")"<<endl;
            l++;
            h--;
        }
        else if(currentSum<givenSum) l++;
        else h--;
    }

    if(!isPresent) {
        cout<<"No pair found";
    }

}

int main() {
    //vector<int> arr = {0,-1,2,-3,1,5,-7};
    vector<int> arr = {11,15,6,8,9,10};
    int givenSum = 16;
    isPairPresent(arr, givenSum);
}