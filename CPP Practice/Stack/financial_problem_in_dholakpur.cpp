#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &arr) {
    stack<int> stck;
    vector<int> res(arr.size());
    stck.push(0);
    res[0]=1;
    for(int i=1;i<arr.size();i++) {
        while(!stck.empty() && arr[i]>=arr[stck.top()]) stck.pop();
        res[i] = stck.empty()?i+1:(i-stck.top());
        stck.push(i);
    }
    return res;
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i=0;i<N;i++) cin>>arr[i];
        arr = solve(arr);
        for(int i=0;i<N;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
}