#include<bits/stdc++.h>
using namespace std;

string isModifyable(vector<int> &arr) {
    for(int i=0;i<arr.size()-1;i++) {
        if(arr[i]>0) {
            arr[i+1]-=arr[i];
            arr[i]=0;
        }
    }
    bool areZeros=1;
    for(int i=0;i<arr.size();i++) {
        if(arr[i]!=0) {
            areZeros=0;
            break;
        }
    }
    return areZeros==1?"YES":"NO";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    cout<<isModifyable(arr);
}