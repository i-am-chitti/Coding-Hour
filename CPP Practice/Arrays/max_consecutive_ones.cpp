#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxOnes = 0, j, numOnes=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] == 1) {
                numOnes++;
            }
            else {
                if(numOnes > maxOnes) maxOnes = numOnes;
                numOnes = 0;
            }
        }
    return maxOnes;
}

int main() {
    vector<int> nums = {1,1,0,1};
    cout<<findMaxConsecutiveOnes(nums);
}