//Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, 
//also in sorted non-decreasing order.
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        int middleIndex;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]>=0) {
                middleIndex = i;
                break;
            } 
        }
        int up, down;
        up = middleIndex;
        if(middleIndex-1 >= 0) down=middleIndex-1;
        while(up < nums.size() && down >= 0) {
            int upperSquare = nums[up] * nums[up];
            int downSquare = nums[down] * nums[down];
            if(upperSquare<=downSquare) {
                result.push_back(upperSquare);
                up++;
            }
            else {
                result.push_back(downSquare);
                down--;
            }
        }

        while(up < nums.size()) {
            result.push_back(nums[up] * nums[up]);
            up++;
        }
        while(down >= 0) {
            result.push_back(nums[down] * nums[down]);
            down--;
        }

        return result;
    }
};

int* sortedSquares(int* A, int ASize, int* returnSize){
    int *arr = (int*) malloc(ASize*sizeof(int));
    for(int i=0;i<ASize;i++) {
        arr[i] = A[i]*A[i];
    }
    cout<<endl;
    for(int i=0;i<ASize;i++) {
        cout<<arr[i]<<"\t";
    }
    int temp, j;
    for(int i=0;i<ASize;i++) {
        temp = arr[i];
        for(j=i-1;j>=0 && arr[j]>temp;j--) {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
    //*returnSize = ASize;
    cout<<endl;
    for(int i=0;i<ASize;i++) {
        cout<<arr[i]<<"\t";
    }
    return arr;
}

int main() {
    //Solution obj;
    //vector<int> nums = {-1,2,2};
    //nums = obj.sortedSquares(nums);
    // for(auto& it : nums) {
    //     cout<<it<<"\t";
    // }
    int ASize = 5, *returnSize;
    int *A = (int*) malloc(ASize*sizeof(int));
    A[0] = -4;
    A[1] = -1;
    A[2] = 0;
    A[3] = 3;
    A[4] = 10;
    int *arr;
    arr = sortedSquares(A, ASize, returnSize);
    //for(int i=0;i<*returnSize;i++) {
    //    cout<<arr[i];
    //}
}