#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<int>> &arr, int r, int c) {
    for(int i=0;i<c;i++) {
        //left side
        if(arr[r][i] == 1) return false;
    }
    for(int i=r,j=c;i>=0&&j>=0;i--,j--) {
        //upper left diagonal
        if(arr[i][j]==1) return false;
    }
    for(int i=r,j=c; i<arr.size()&&j>=0;i++,j--) {
        if(arr[i][j]==1) return false;
    }
    return true;
}

bool solve(vector<vector<int>> &arr, int currentCol) {
    //all queens are placed
    if(currentCol>=arr.size()) return true;

    for(int i=0;i<arr.size();i++) {
        if(isValid(arr, i, currentCol)) {
            arr[i][currentCol] = 1;
            if(solve(arr, currentCol+1)) return true;
            else arr[i][currentCol] = 0;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> arr;
    int N;
    cin>>N;
    for(int i=0;i<N;i++) {
        vector<int> t;
        for(int j=0;j<N;j++) t.push_back(0);
        arr.push_back(t);
    }
    //cout<<solve(arr, 0);
    solve(arr, 0);
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}