#include<bits/stdc++.h>
using namespace std;

int findGcd(int a, int b) {
    if(b == 0) return a;
    else return findGcd(b, a%b);
}

void rightRotate(vector<int> &arr, int k) {
    int n = arr.size();
    if(k>n) k=k%n;
    int gcd = findGcd(n, k);

    int temp, j, d;

    for(int i=n-1; n-i-1<gcd; i--) {

        temp = arr[i];
        j = i;
        while(1) {
            d = j-k;
            if(d<0) d = d+n;
            if(d == i) break;
            arr[j] = arr[d];
            j=d;
        }
        arr[j] = temp;
        
    }
}

int main() {
    int T;
	cin>>T;
	while(T--) {
		int N, k, t;
		cin>>N>>k;
		vector<int> arr;
		for(int i=0;i<N;i++) {
			cin>>t;
			arr.push_back(t);
		}
		rightRotate(arr, k);
		for(int i=0;i<N;i++) cout<<arr[i]<<" ";
		cout<<endl; 
	}
}