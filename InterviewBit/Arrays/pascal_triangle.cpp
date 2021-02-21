#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    vector<vector<int>> arr;
    arr.push_back(vector<int>(1,1));
    for(int i=1;i<N;i++) {
        vector<int> temp;
        temp.push_back(1);
        for(int j=1;j<i;j++) {
            temp.push_back(arr[i-1][j]+arr[i-1][j-1]);
        }
        temp.push_back(1);
        arr.push_back(temp);
    }
    for(int i=0;i<arr.size();i++) {
        for(int j=0;j<arr[i].size();j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}