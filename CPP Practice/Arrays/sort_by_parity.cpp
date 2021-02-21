#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int length = A.size();
        int ptr1=0, ptr2=0;
        while(ptr1<length && A[ptr1]%2==0) ptr1++;
        if(ptr1 == length) return A;
        ptr2 = ptr1;
        while(ptr2<length) {
            if(A[ptr2]%2==0) {
                int temp = A[ptr2];
                A[ptr2] = A[ptr1];
                A[ptr1] = temp;
                ptr1++;
            }
            ptr2++;
        }
        return A;
    }
};

int main() {
    Solution obj;
    vector<int> A = {2,4};
    A = obj.sortArrayByParity(A);
    for(int i=0;i<A.size();i++) cout<<A[i]<<"\t";
}