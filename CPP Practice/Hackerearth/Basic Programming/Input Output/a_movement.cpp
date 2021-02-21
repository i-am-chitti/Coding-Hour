#include<bits/stdc++.h>
using namespace std;

int main() {
	long long N;
    cin>>N;
    if(N%5==0) cout<<N/5;
    else cout<<(N/5)+1;
}