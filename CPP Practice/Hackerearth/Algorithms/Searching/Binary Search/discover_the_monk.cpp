#include<bits/stdc++.h>
using namespace std;

bool isMonkPresent(vector<int> &arr, int l, int r, int monk) {
    if(l<r) {
        int m=(l+r)/2;
        if(arr[m]==monk) return 1;
        else if(arr[m]>monk) return isMonkPresent(arr, l, m-1, monk);
        else return isMonkPresent(arr,m+1, r,monk);
    }
    else return 0;
}

int main() {
    int N,Q,x;
    cin>>N>>Q;
    vector<int> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    sort(arr.begin(), arr.end());
    cout<<isMonkPresent(arr, 0, N-1, 2);
    while(Q--) {
        cin>>x;
        if(isMonkPresent(arr,0,N-1,x)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}