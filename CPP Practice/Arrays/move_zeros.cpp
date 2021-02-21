//Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int length = nums.size();
        if(length == 0) return;
        int ptr1=0,ptr2=0;
        while(nums[ptr1] != 0 && ptr1<length) ptr1++;
        //if(ptr1 == length) return;
        ptr2 = ptr1;
        while(ptr2<length) {
            if(nums[ptr2] != 0) {
                nums[ptr1] = nums[ptr2];
                nums[ptr2] = 0;
                ptr1++;
            }
            ptr2++;
        }
    }
};

int main() {
    Solution obj;
    vector<int> nums = {0,1,2};
    obj.moveZeroes(nums);
    for(int i=0;i<nums.size();i++) cout<<nums[i]<<"\t";
}