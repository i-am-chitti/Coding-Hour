/*
https://www.hackerrank.com/challenges/minimum-swaps-2/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=arrays
*/

#include<bits/stdc++.h>
using namespace std;

int minimumSwaps(vector<int> arr) {
    int count=0;
    for(int i=arr.size()-1;i>=0;i--) {
        if(arr[i]-(i+1)!=0) {
            for(int j=i-1;j>=0;j--) {
                if(arr[j]==i+1) {
                    count++;
                    swap(arr[j],arr[i]);
                    break;
                }
            }
        }
    }
    return count;
}

int main() {
    vector<int> arr = {4,3,1,2};
    cout<<minimumSwaps(arr);
}