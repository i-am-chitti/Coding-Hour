#include<bits/stdc++.h>
using namespace std;

int solve(int n, vector<vector<int>> operations) {
    long long int sum=0;
    for(unsigned int i=0;i<operations.size();i++) {
        sum+=(operations[i][1]-operations[i][0]+1)*operations[i][2];
    }
    return sum/n;
}

int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr;
    for(int i=0;i<m;i++) {
        vector<int> temp;
        for(int j=0;j<3;j++) {
            int k;
            cin>>k;
            temp.push_back(k);
        }
        arr.push_back(temp);
    }
    cout<<solve(n, arr);
}