#include<bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> arr) {
    int temp;
    for(int i=0;i<arr.size()-1;i++) {
        for(int j=0;j<arr.size()-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr;
}

int main() {
    int N;
    cin>>N;
    vector<int> arr(N);
    map <int, int> m;
    for(int i=0;i<N;i++) {
        cin>>arr[i];
        m.insert({arr[i],i});
    }
    vector<int> sortedArr(arr);
    //vector<int> sortedArr = bubbleSort(arr);
    sort(sortedArr.begin(),sortedArr.end());
    for(int i=0;i<sortedArr.size();i++) {
        cout<<m[sortedArr[i]]<<" ";
    }
}