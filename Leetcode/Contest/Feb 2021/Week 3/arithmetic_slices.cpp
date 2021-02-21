class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int len=2;
        int res=0;
        int N=A.size();
        if(N<3) return 0;
        int comDiff=A[1]-A[0];
        for(int i=2;i<N;i++) {
            if(A[i]-A[i-1]==comDiff) len++;
            else {
                if(len>2)  res+=((len-1)*(len-2))/2;
                len=2;
                comDiff=A[i]-A[i-1];
            }
        }
        if(len>2) res+=((len-1)*(len-2))/2;
        return res;
    }
};