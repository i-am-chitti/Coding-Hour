class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxA=0,N=height.size();
        int i=0,j=N-1;
        while(i<j) {
            if(height[i]>height[j]) {
                maxA=max(height[j]*(j-i),maxA);
                j--;
            }
            else {
                maxA=max(height[i]*(j-i),maxA);
                i++;
            }
        }
        return maxA;
    }
};