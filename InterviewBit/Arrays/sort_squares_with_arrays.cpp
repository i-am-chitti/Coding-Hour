#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &A) {
    int pivot=-1,N=A.size();
    vector<int> res;
    for(int i=1;i<N;i++) {
        if(A[i-1]<0 && A[i]>=0) pivot=i;
    }
    if(pivot!=-1) {
        int left=pivot-1,right=pivot;
        while(left>=0 && right<N) {
            if(A[left]*A[left]<A[right]*A[right]) {
                res.push_back(A[left]*A[left]);
                left--;
            }
            else {
                res.push_back(A[right]*A[right]);
                right++;
            }
        }
        while(left>=0) {
            res.push_back(A[left]*A[left]);
            left--;
        }
        while(right<N) {
            res.push_back(A[right]*A[right]);
            right++;
        }
    }
    return res;
}
