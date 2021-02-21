#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &A, int B) {
    int nLights=0,nextToLight=0;
    bool isLighted=0;
    for(int i=0;i<A.size();i++) {
        if(A[i]==1) {
            if(nextToLight<=i) {
                if(i-B+1<=nextToLight) {
                    cout<<i<<" ";
                    nLights++;
                    nextToLight=i+B;
                    isLighted=1;
                }
                else return -1;
            }
            else isLighted=1;
        }
        else {
            if(i>nextToLight) isLighted=0; 
            else isLighted=1;
        }
    }
    if(isLighted) return nLights;
    else return -1;
}


int solve2(vector<int> &A, int B) {
    int curr=0,nLights=0;
    cout<<curr<<" "<<A.size()<<endl;
    while(curr<A.size()) {
        int lR=max(curr-B+1,0),rR=curr+B-1;
        while(rR>=lR) {
            if(A[rR]) break;
            rR--;
        }
        if(rR>=lR) {
            nLights++;
            curr=rR+B;
        }
        else return -1;
    }
    return nLights;
}

int main() {
    vector<int> arr;
    arr={1,1,1,1};
    cout<<solve2(arr,3);
}
