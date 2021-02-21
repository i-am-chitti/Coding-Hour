#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr) {
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int solve(int A, int B[]) {
    vector<int> prefixSum(A),suffixSum(A);
    prefixSum[0]=B[0];
    for(int i=1;i<A;i++) prefixSum[i]=prefixSum[i-1]+B[i];
    if(prefixSum[A-1]%3) return 0;
    suffixSum[0]=prefixSum[A-1];
    for(int i=1;i<A;i++) suffixSum[i]=suffixSum[i-1]-B[i-1];
    
    int oneThird = suffixSum[0]/3;
    vector<int> temp(A,0);
    
    int tempSum=0;
    for(int i=A-1;i>=0;i--){
        tempSum += B[i];
        if(tempSum==oneThird){
            temp[i]=1;
        }
    }
    
    tempSum=0;
    int total=0;
    for(int i=0; i <A; i++){
        tempSum += B[i];
        if(tempSum == oneThird){
            for(int j=i+2;j<A;j++){
                if(temp[j]==1){
                    total+=1;
                }
            }
        }
        
    }
    return total;
}


int main() {
    int A[]={0,1,-1,0};
    cout<<solve(4,A);
}