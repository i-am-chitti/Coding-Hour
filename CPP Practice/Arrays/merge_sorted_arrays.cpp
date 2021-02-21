//Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;i++) {
            int insertPos = this->correctPosition(nums1, m, nums2[i]);
            cout<<"insertpos = "<<insertPos<<endl;
            this->makeSpace(nums1, insertPos);
            nums1[insertPos] = nums2[i];
            m++;
            for(int j=0;j<nums1.size();j++) cout<<nums1[j]<<"\t";
            cout<<endl;
        }
        for(int i=0;i<nums1.size();i++) {
            cout<<nums1[i]<<"\t";
        }
    }

    int correctPosition(vector<int>& nums, int m, int num) {
        for(int i=0;i<m-1;i++) {
            if(nums[i] < num && num <= nums[i+1]) {
                return i+1;
            }
        }
    }

    void makeSpace(vector<int>& nums, int index) {
        for(int i=nums.size()-1;i>=index;i--) {
            nums[i] = nums[i-1];
        }
    }

    void mergeSortedArrays(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        m--;
        n--;
        for(int i=nums1.size()-1;i>=0;i--) {
            if(n<0) {
                nums1[i] = nums1[m];
                m--;
            }
            else if(m<0) {
                nums2[i] = nums2[n];
                n--;
            }
            else {
                if(nums1[m]>nums2[n]) {
                    nums1[i] = nums1[m];
                    m--;
                }
                else {
                    nums1[i] = nums2[n];
                    n--;
                }
            }
            for(int j=0;j<nums1.size();j++) {
                cout<<nums1[j]<<"\t";
            }
            cout<<endl;
        }

        for(int j=0;j<nums1.size();j++) {
            cout<<nums1[j]<<"\t";
        }

    }
};

int main() {
    Solution obj;
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    obj.mergeSortedArrays(nums1, 3, nums2, 3);
}