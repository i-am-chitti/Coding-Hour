int Solution::maxSubArray(const vector<int> &A) {
    int currentSum=A[0],maxSum=A[0];
    for(int i=1;i<A.size();i++) {
        currentSum = max(currentSum+A[i],A[i]);
        maxSum=max(maxSum,currentSum);
    }
    return maxSum;
}
