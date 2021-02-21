#include<bits/stdc++.h>
using namespace std;

//multiple peak finding
vector<int> findPeaks(vector<int> arr) {
    vector<int> res;
    if(arr.size()==1) res.push_back(arr[0]);
    else {
        if(arr[0]>arr[1]) res.push_back(arr[0]);
        int n = arr.size();
        for(int j=1;j<n-1;j++) {
            if(arr[j]>arr[j-1] && arr[j]>arr[j+1]) res.push_back(arr[j]);
        }
        if(arr[n-1]>arr[n-2]) res.push_back(arr[n-1]);
    }
    return res;
}

//single peak finding
int findPeak(vector<int> &arr, int l, int h) {
    if(l<=h) {
        int m = (l+h)/2;
        if(arr[m]>arr[m-1] && arr[m]>arr[m+1]) return arr[m];
        else if(arr[m-1]>arr[m] && arr[m-1]>arr[m]) return findPeak(arr, l, m-1);
        else return findPeak(arr, m+1, h);
    }
    else return -1;
}

int main() {
    vector<int> arr = {5,6,1,3,4,2,9}; //1,1,1,1 no peak value
    vector<int> res;
    res = findPeaks(arr);
    if(res.size() == 0) cout<<"No peak exists\n";
    else {
        for(int i=0;i<res.size();i++) cout<<res[i]<<"\t";
    }
    int peak = findPeak(arr, 0, arr.size()-1);
    if(peak==-1) cout<<"No peak exists";
    else cout<<"peak value = "<<peak;
}