class Solution {
public:
    void recur(vector<int> &nums, int target, int currSum, int &res, int i) {
        if(target==currSum && i==nums.size()) {
            res++;
            //cout<<res<<"\n";
            return;
        }
        else if(abs(currSum) > abs(target) && i>=nums.size()) return;
        if(i<nums.size()) {
            recur(nums,target,currSum+nums[i],res,i+1);
            recur(nums,target,currSum-nums[i],res,i+1);
        }
        return;
    }
    int findTargetSumWays(vector<int>& nums, int S) {
        int currSum=0,res=0;
        recur(nums,S,currSum,res,0);
        return res;
    }
};