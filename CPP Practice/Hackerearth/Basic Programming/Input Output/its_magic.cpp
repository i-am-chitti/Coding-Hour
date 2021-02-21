#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,min=-1;
    cin>>N;
    vector<long long> arr;
    long long t,sum=0,diff;
    for(int i=0;i<N;i++) {
        cin>>t;
        arr.push_back(t);
        sum+=t;
    }
    for(int i=0;i<N;i++) {
        diff=sum-arr[i];
        if(diff%7==0) {
            if(min==-1) {
                min=i;
            }
            else if(arr[i]<arr[min]) min=i;
        }
    }
    cout<<min;

}