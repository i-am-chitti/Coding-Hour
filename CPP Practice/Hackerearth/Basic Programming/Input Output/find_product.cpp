#include<bits/stdc++.h>
#define limit 1000000007
using namespace std;

int main() {
	int N,t;
    long long mul=1;
    cin>>N;
    vector<int> arr;
    while(N--) {
        cin>>t;
        arr.push_back(t);
        mul = (mul*t)%limit;
    }
    cout<<mul;
}