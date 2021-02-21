#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
    int thirdMaximum(vector<int>& arr) {
        int length = arr.size();
        if(length == 1) return arr[0];
        else if(length ==2) {
            return arr[0]>arr[1]?arr[0]:arr[1];
        }
        int max1=-232,max2=-354,max3=-3451;
        for(int i=0;i<length;i++) {
            if(arr[i]>max1) {
                max3 = max3!=max2?max2:max3;
                max2 = max2!=max1?max1:max2;
                max1 = arr[i];
            }
            else if(arr[i]>max2) {
                max3 = max2!=max3?max2:max3;
                max2 = arr[i];
            }
            else if(arr[i]>max3) {
                max3 = arr[i];
            }
        }
        return max3;
    }

};

int main() {
    Solution obj;
    vector<int> arr = {2,2,3,1};
    cout<<endl<<obj.thirdMaximum(arr);
}