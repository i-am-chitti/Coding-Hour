#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int num = 0;
        for(auto& it: nums) {
            if(this->countDigits(it)%2 ==0) num++;
        }
        return num;
    }
private:
    int countDigits(int num) {
        int numOfDigits = 0;
        while(num>0) {
            num /= 10;
            numOfDigits++;
        }
        return numOfDigits;
    }    
};

int main() {
    Solution obj;
    vector<int> nums = {12,345,2,6,7896};
    cout<<obj.findNumbers(nums);
}