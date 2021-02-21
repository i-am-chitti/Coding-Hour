#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    vector<long long> arr(N,0);
    for(int i=0;i<N;i++) {
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());

    long long nDiffElem=0,nSameElem=0,total=0;
    for(int i=0;i<N;i++) {
        if(arr[i]+1==arr[i+1]) nDiffElem++;
        else if(arr[i]==arr[i+1]) { nSameElem++; nDiffElem++; }
        else {
            if(nDiffElem!=nSameElem) total+=(nDiffElem*(nDiffElem+1))/2;
            nDiffElem=0;
            nSameElem=0;
        }
    }
    cout<<total;

}