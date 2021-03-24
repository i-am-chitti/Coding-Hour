class Solution {
public:
    void allSums(vector<int> &candidates, int target, vector<int> &temp, vector<vector<int>> &res, int i) {
        if(target==0) res.push_back(temp);
        else if(target<0) return;
        while(i<candidates.size() && candidates[i]<=target) {
            temp.push_back(candidates[i]);
            allSums(candidates,target-candidates[i],temp,res,i);
            temp.pop_back();
            i++;
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> temp;
        allSums(candidates,target,temp,res,0);
        return res;
    }
};