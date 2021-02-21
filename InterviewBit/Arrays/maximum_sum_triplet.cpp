int Solution::solve(vector<int> &A) {
    int i,j,k,sum=0;
    for(j=1;j<A,size()-1;j++) {
        int max1=0;
            if(A[i]<A[j]) {
                max1=A[i]>max1?A[i]:max1;
            }
        }
        int max2=0;
        for(k=j+1;k<A.size();k++) {
            if(A[k]>A[j]) {
                max2=A[k]>max2?A[k]:max2;
            }
        }
        if(max1 && max2 && A[j]+max1+max2>sum) sum=A[j]+max1+max2;
    }
    return Sum;
}

int getLowValue(set<int>& lowValue, int &n) {
    auto it = lowValue.lower_bound(n);
    --it;
    return *(it);
}

//efficient approach
int Solution::solve2(vector<int> &A) {
    vector<int> suffixArr(A.size());
    int N=A.size();
    suffixArr[N-1]=0;
    int sum=0;
    for(int i=N-2;i>=0;i--) {
        suffixArr[i]=max(suffixArr[i+1],A[i]);
    }
    set<int> lowValue;
    lowValue.insert(INT_MIN);
    int ans=0;
    for(int i=0;i<N-2;i++) {
        ans = max(ans,getLowValue(lowValue,A[i])+A[i]+suffixArr[i+1]);
        lowValue.insert(A[i]);
    }
    return ans;
}
