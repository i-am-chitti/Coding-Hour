#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int nUnique = 1;
        int ptr1=0,ptr2=0, length = nums.size();
        while(ptr2<length) {
            if(nums[ptr2] != nums[ptr1]) {
                nums[ptr1+1] = nums[ptr2];
                nUnique++;
                ptr1++;
            }
            ptr2++;
        }
        for(int i=0;i<length;i++) {
            cout<<nums[i]<<"\t";
        }
        return nUnique;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1,1,2};
    cout<<endl<<obj.removeElement(nums, 3);
}