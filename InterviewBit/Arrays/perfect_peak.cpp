#include<bits/stdc++.h>
using namespace std;

int perfectPeak(vector<int> &A) {
    int N=A.size();
    if(N==1 || N==2) return 0;
    int max=A[0];
    for(int i=1;i<N-1;i++) {
        if(A[i]>max) {
            bool flag=1;
            for(int j=i+1;j<N;j++) {
                if(A[i]>=A[j]) {
                    flag=0;
                    break;
                }
            }
            if(flag) {
                cout<<A[i]<<endl;
                return 1;
            }
            else max=A[i];
        }
    }
    return 0;
}


int main() {
    int N;
    //cin>>N;
    vector<int> arr(10);
    arr={1, 2, 3, 4, 5, 4, 3, 2, 3, 10};
    // for(int i=0;i<N;i++) {
    //     cin>>arr[i];
    // }
    cout<<perfectPeak(arr);
}