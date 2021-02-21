#include<bits/stdc++.h>
using namespace std;

int findGcd(int a, int b) {
    if(b == 0) return a;
    else return findGcd(b, a%b);
}

//Method 1
void leftRotate1(vector<int> arr, int k) {
    int n = arr.size();
    if(k>n) k=k%n;
    int gcd = findGcd(n, k);
    
    int temp, j, d;

    for(int i=0; i<gcd; i++) {
        temp = arr[i];
        j = i;
        while(1) {
            d = j+k;
            if(d>=n) d-=n;
            if(d == i) break;
            arr[j] = arr[d];
            j=d;
        }
        arr[j] = temp;
    }

    for(int i=0;i<arr.size();i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

//Method 2, simple
void leftRotate2(vector<int> arr, int k) {
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());
    for(int i=0;i<arr.size();i++) {
        cout<<arr[i]<<"\t";
    }
}

int main() {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    leftRotate2(arr, 2);
}