//Given a fixed length array arr of integers, duplicate each occurrence of zero, shifting the remaining elements to the right.
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i=0;i<arr.size();i++) {
            if(arr[i] == 0) {
                this->transformArray(arr, i);
                i++;
            }
        }
        
        for(int i=0;i<arr.size();i++) cout<<arr[i]<<"\t";
    }

    void transformArray(vector<int> &arr, int index) {
        for(int i=arr.size()-1;i>index;i--) {
            arr[i] = arr[i-1];
        }
    } 
};

int main() {
    vector<int> arr = {1,2,3};
    Solution obj;
    obj.duplicateZeros(arr);
}