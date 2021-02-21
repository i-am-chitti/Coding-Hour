#include<bits/stdc++.h>
using namespace std;

// int Solution::maxArr(vector<int> &A) {
//     int i,j,N=A.size(),maxDiff=INT_MIN;
//     for(i=0;i<N;i++) {
//         for(j=0;j<N;j++) {
//             int res = abs(A[i]-A[j]+abs(i-j));
//             if(res>maxDiff) maxDiff=res;
//         }
//     }
//     return maxDiff;
// }
int Solution::maxArr(vector<int> &A) {
    int max1=INT_MIN,min1=INT_MAX,max2=max1,min2=min1;
    for(int i=0;i<A.size();i++) {
        max1=max(max1,A[i]+i);
        min1=min(min1,A[i]+i);
        max2=max(max2,A[i]-i);
        min2=min(min2,A[i]-i);
    }
    int ans1 = max1-min1,ans2=max2-min2;
    return max(ans1,ans2);
}

int fun(int a, int b, int i, int j) {
    return abs(a-b+abs(i-j));
}

int maxArr(int A[]) {
    int i,j,N=3,maxDiff=0;
    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            if(i==j) continue;
            else if((A[i]<0 && A[j]<0) || (A[i]>0 && A[j]<0) || (A[i]>=A[j]) || (abs(A[i])<A[j])) maxDiff=max(maxDiff, fun(A[i],A[j],i,j));
        }
    }
    return maxDiff;
}

int main() {
    int A[]={2,2,2};
    cout<<maxArr(A);
}
