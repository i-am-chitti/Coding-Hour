#include<bits/stdc++.h>
using namespace std;

int main() {
	int N;
    cin>>N;
    long long mul=1;
    for(int i=2;i<=N;i++) {
        mul*=i;
    }
    cout<<mul;
}