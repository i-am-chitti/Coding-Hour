#include<bits/stdc++.h>
using namespace std;

int searchSoldier(vector<int> &arr, int bishuPower, int l, int r) {
    if(l>r) return -1;
    else if(l<0) return -2;
    int m=(l+r)/2;
    if(arr[m]<=bishuPower) return m;
    else if(arr[m]>bishuPower) return searchSoldier(arr, bishuPower, l, m-1);
    else return searchSoldier(arr, bishuPower, m+1, r); 
}

int searchSoldiers(vector<int> &arr, int bishuPower) {
    int n=0;
    for(int i=0;i<arr.size();i++) {
        if(arr[i]<=bishuPower) n++;
    }
    return n;
}

int getPowerSum(vector<int> &arr,int r) {
    int sum=0;
    for(int i=0;i<=r;i++) sum+=arr[i];
    return sum;
}

int main() {
    int N,Q,bishuPower,index;
    cin>>N;
    vector<int> power(N);
    for(int i=0;i<N;i++) cin>>power[i];
    sort(power.begin(), power.end());
    cin>>Q;
    for(int i=0;i<Q;i++) {
        cin>>bishuPower;
        // index=searchSoldier(power,bishuPower,0,N-1);
        // if(index==-2) cout<<"0 0"<<endl;
        // else if(index==-1) cout<<N<<" "<<getPowerSum(power, 0, N-1)<<endl;
        // else cout<<index+1<<" "<<getPowerSum(power, 0, index)<<endl;
        index=searchSoldiers(power, bishuPower);
        cout<<index<<" "<<getPowerSum(power,index-1)<<endl;
    }
}