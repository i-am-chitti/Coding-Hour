#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) {
            int j=abs(nums[i])-1;
            nums[j] = abs(nums[j])*-1;
        }
        vector<int> result;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]>0) result.push_back(i+1);
        }
        return result;
        
    }
};

int main() {
    Solution obj;
    vector<int> nums={4,3,2,7,8,2,3,1};
    nums = obj.findDisappearedNumbers(nums);
    for(int i=0;i<nums.size();i++) {
        cout<<nums[i]<<"\t";
    }
}